//
// Created by Samik Biswas on 25-10-2019.
//

#include "reverse.h"
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int reverse(int x) {

    string num;
    string finalNum;

    num = to_string(x);
    auto itr1 = num.begin();
    auto itr2 = num.end() - 1;

    while (itr1 <= itr2) {
        char c = *itr1;
        *itr1 = *itr2;
        *itr2 = c;
        itr1++;
        itr2--;
    }
    if (x < 0) {
        num.pop_back();
        stringstream geek(num);
        geek >> x;
        return x * -1;
    } else if (x >= 0) {
        stringstream geek(num);
        geek >> x;
        return x;
    }

    return x;

}