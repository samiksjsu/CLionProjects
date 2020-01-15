//
// Created by Samik Biswas on 19-09-2019.
//
#include <vector>
using namespace std;

int fib(int num){

    if(num <= 1){
        return 0;
    }

    if (num == 2){
        return 1;
    }

    return fib(num - 1) + fib(num - 2);
}

vector<int> memory(100, -1);
/*Here we have maintained a memory vector.
 * Whenever there is a recursive function call, first this vector is checked.
 * if the value is present, we directly return the value from that index,.
 * Otherwise the recursive call is made.
 *
 * for example: when fib(2) call is made for the first time, the value of fib(2)
 * is stored at memory[2]. Later whenever this call is required, this will directly replaced from this vector.
 * This reduces the redundant function calls.*/

int fibm(int num){
    if(num <= 1){

        memory[num] = 0;
        return memory[num];

    } else if(num == 2){

        memory[num] = 1;
        return memory[num];
    }
    else{

        if (memory[num - 2] == -1)
        {
            memory[num - 2] = fib(num - 2);
        }

        if (memory[num - 1] == -1)
        {
            memory[num - 1] = fib(num - 1);
        }

        return memory[num - 2] + memory[num - 1];
    }
}
