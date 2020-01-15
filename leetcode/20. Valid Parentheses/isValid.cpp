//
// Created by Samik Biswas on 25-10-2019.
//

#include "isValid.h"
#include <stack>

bool isValid(string &s) {

    int length = s.length();
    stack<char> st;

    if (length == 0) {
        return false;
    } else {
        if (s.at(0) == ')' || s.at(0) == '}' || s.at(0) == ']'){
            return false;
        }
        for (int i = 0; i < length; ++i) {
            if (s.at(i) == '(') {st.push(')');}
            else if (s.at(i) == '{') {st.push('}');}
            else if (s.at(i) == '[') {st.push(']');}

            else {
                if (!st.empty() && s.at(i) == st.top()) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
    }

    if (!st.empty()) {
        return false;
    }

    return true;
}