//
// Created by Samik Biswas on 22-10-2019.
//

#include "isHappy.h"
#include <unordered_set>
#include <string>
using namespace std;

bool isHappy(int n) {

    string s1 = to_string(n);
    unordered_set<int> s;
    int sumOfSquares = 0;

    while (1) {
        for(auto element: s1) {
            sumOfSquares += (element - '0') * (element - '0');
        }
        if (s.find(sumOfSquares) != s.end()) {
            return false;
        }
        s.insert(sumOfSquares);
        if (sumOfSquares == 1) {
            return true;
        }
        s1 = to_string(sumOfSquares);
        sumOfSquares = 0;
    }
}