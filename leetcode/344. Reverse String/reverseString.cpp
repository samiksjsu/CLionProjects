//
// Created by Samik Biswas on 08-10-2019.
//
#include <iostream>
#include "reverseString.h"
using namespace std;

void reverseString(vector<char>& s){
    int size = s.size();
    int i = size - 1, j = 0;
    char c;

    while (j < i){
        c = s.at(i);
        s.at(i) = s.at(j);
        s.at(j) = c;
        j++;
        i--;
    }

}