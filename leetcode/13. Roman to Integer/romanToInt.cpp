//
// Created by Samik Biswas on 16-10-2019.
//

#include "romanToInt.h"
#include <unordered_map>
using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> m;
    int length = s.length();

    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;

    int num = 0;

    for (int i = 0; i < length; ++i) {
        if (i + 1 < length && m.find(s.at(i))->second < m.find(s.at(i + 1))->second) {
            num += m.find(s.at(i + 1))->second - m.find(s.at(i))->second;
            i++;
        } else {
            num += m.find(s.at(i))->second;
        }
    }

    return num;

}