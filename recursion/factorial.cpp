//
// Created by Samik Biswas on 19-09-2019.
//
#include <vector>
using namespace std;

int fact(int n){

    static vector<int> memory (n + 1, -1);

    if(n <= 1){
        memory[n] = 1;
        return memory[n];
    }

    else {

        if (memory[n] == -1){
            memory[n] = n * fact(n - 1);
        }
        return memory[n];
    }
}