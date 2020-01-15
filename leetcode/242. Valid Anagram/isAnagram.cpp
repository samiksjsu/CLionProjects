//
// Created by Samik Biswas on 08-10-2019.
//

#include "isAnagram.h"
#include <unordered_map>
using namespace std;

bool isAnagram(string s, string t) {

    unordered_map<char, int> m1;

    if (s.length() != t.length()){
        return false;
    }

    for(char c: s){
        if (m1.find(c) == m1.end()){
            m1[c] = 1;
        } else {
            m1.find(c)->second += 1;
        }
    }

    for (char c: t){
        if (m1.find(c) != m1.end()){
            if (m1.find(c)->second > 1){
                m1.find(c)->second -= 1;
            } else {
                m1.erase(c);
            }
        } else {
            return false;
        }
    }

    return true;
}