#include <iostream>
#include <string>
#include <unordered_map>
#include <queue>
using namespace std;

int main() {
    string digits = "2";
    vector<string> result;

    unordered_map<char, string> m;
    m['2'] = "abc";
    m['3'] = "def";
    m['4'] = "ghi";
    m['5'] = "jkl";
    m['6'] = "mno";
    m['7'] = "pqrs";
    m['8'] = "tuv";
    m['9'] = "wxyz";


    if (digits.length() == 1) {
        string temp = m[digits[0]];
        for (auto &c: temp) {
            string t(1, c);
            result.push_back(t);
        }
    }

    queue<string> q;

    string first = m[digits.at(0)];
    string second = m[digits.at(1)];
    string temp = "";

    for(auto &c1: first) {
        for(auto &c2: second) {
            temp = "";
            temp.push_back(c1);
            temp.push_back(c2);
            q.push(temp);
        }
    }

    int ptr = 2;

    while (!q.empty() && ptr < digits.length()) {
        int size = q.size();
        first = m[digits.at(ptr)];
        while (size > 0) {
            temp = "";
            second = q.front();
            q.pop();

            temp = second;
            for (auto &c: first) {
                string temp2 = temp;
                temp2.push_back(c);
                q.push(temp2);
            }

            size--;
        }
        ptr++;
    }

    while(!q.empty()) {
        result.push_back(q.front());
        q.pop();
    }

    cout << "Hello" << endl;
}
