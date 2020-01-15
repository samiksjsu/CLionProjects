//
// Created by Samik Biswas on 10-10-2019.
//

#include "climbStairs.h"
#include <vector>
using namespace std;

int climbStairs(int n) {
    int size = n + 1;
    static vector<int> *memory = new vector<int>(n+1, -1);

    if (n <= 2){
        if (memory->at(n) == -1){
            memory->at(n) = n;
            return memory->at(n);
        } else {
            return memory->at(n);
        }
    } else {
        if (memory->at(n - 2) == -1){
            memory->at(n - 2) = climbStairs(n - 2);
        }
        if (memory->at(n - 1) == -1){
            memory->at(n - 1) = climbStairs(n - 1);
        }
        return (memory->at(n - 2) + memory->at(n - 1));
    }
}