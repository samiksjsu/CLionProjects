//
// Created by Samik Biswas on 29-10-2019.
//

#include "evenDigits.h"
#include <string>
#include <map>

int fact(int n) {
    if ((n==0)||(n==1))
        return 1;
    else
        return n*fact(n-1);
}

int evenDigits(vector<int> &arr) {

    int count = 0;

    for(int element: arr) {
        string s = to_string(element);
        if (s.length() % 2 == 0) {
            count++;
        }
    }

    return count;
}

int digitAnagrams(vector<int> &arr) {

    vector<map<int, int>> mapArr;
    map<int, int> m;

    for (auto i: arr) {
        string s = to_string(i);

        for(auto j: s) {

            if (m.find(j - '0') == m.end()) {
                m[j - '0'] = 1;
            } else {
                m.find(j - '0')->second += 1;
            }

        }
        mapArr.push_back(m);
        m.clear();
    }

    map<map<int, int>, int> m2;

    for (auto k: mapArr) {
        if (m2.find(k) == m2.end()) {
            m2[k] = 1;
        } else {
            m2.find(k)->second += 1;
        }
    }

    auto itr = m2.begin();
    int count = 0;

    while (itr != m2.end()) {
        if (itr->second > 1) {
            count += fact(itr->second) / (2 * fact(itr->second - 2));
        }
        itr++;
    }

    return count;

}

vector<int> mostFrequentDigit(vector<int> &arr) {

    map<int, int> m;

    for (auto i: arr) {
        string s = to_string(i);

        for (auto j: s) {
            if (m.find(j) == m.end()) {
                m[j] = 1;
            } else {
                m.find(j)->second += 1;
            }
        }
    }

    auto itr = m.begin();
    int maxNumber = 0;

    while (itr != m.end()) {
        if (itr->second > maxNumber) {
            maxNumber = itr->second;
        }
        itr++;
    }

    itr = m.begin();

    vector<int> v;

    while (itr != m.end()) {
        if (itr->second == maxNumber) {
            v.push_back(itr->first - '0');
        }
        itr++;
    }

    return v;
}