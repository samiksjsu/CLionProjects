//
// Created by Samik Biswas on 08-10-2019.
//
#include <iostream>
#include "fizzBuzz.h"
using namespace std;

vector<string> fizzBuzz(int n){

    vector<string> arr;

    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 && i % 5 != 0){
            arr.emplace_back("Fizz");
            continue;
        } else if (i % 5 == 0 && i % 3 != 0) {
            arr.emplace_back("Buzz");
            continue;
        } else if (i % 5 == 0 && i % 3 == 0) {
            arr.emplace_back("Buzz");
            continue;
        } else {
            arr.push_back(to_string(i));
        }
    }

    return arr;
}