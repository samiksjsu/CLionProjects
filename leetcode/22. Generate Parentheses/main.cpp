#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

vector<string> generateParenthesis(int n) {

    if (n == 1) {
        return vector<string>{"()"};
    }

    if (n == 2) {
        return vector<string>{"()()", "(())"};
    }

    string base = "()";
    unordered_set<string> result;
    vector<string> temp = generateParenthesis(n - 1);

    for (auto &s: temp) {

        result.insert(string("(" + s+ ")"));
        result.insert(string(base + s));

        auto itr = s.begin();

        while (itr != s.end()) {
            if (*itr == '(') {
                string temp1 = string(s.begin(), itr + 1);
                temp1 = temp1 + base;
                temp1 += string(itr + 1, s.end());
                result.insert(temp1);
            }
            itr++;
        }
    }
    vector<string> final;
    for(auto &s: result) {
        final.push_back(s);
    }

    return final;
}

int main() {

    string s = "5";
    vector<int> nums = {2,4,5,5,5,5,5,6,6}; int target = 5
    count_if()
}
