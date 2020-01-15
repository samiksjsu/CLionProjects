//
// Created by Samik Biswas on 20-09-2019.
//
#include <iostream>
#include "toh.h"
using namespace std;

void toh(int n, char A, char B, char C){
    if(n > 0){
        toh(n-1, A, C, B);

        cout << A << " to " << C << endl;

        toh(n-1, B, A, C);
    }
}