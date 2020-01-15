//
// Created by Samik Biswas on 20-09-2019.
//
#include <vector>
#include "factorial.h"
using namespace std;

float nCr(int n, int r){

    return fact(n)/(fact(r) * fact(n - r));

}