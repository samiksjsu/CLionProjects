#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;
int main() {
    string s = "pwwkew";
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        unordered_set<char> seen;

        string temp = "";
        for (int j = i; j < s.length(); j++) {

            if (seen.find(s.at(j)) != seen.end()) break;

            temp.push_back(s.at(j));
            seen.insert(s.at(j));
        }
        result = temp.length() > result.length() ? temp : result;
    }

    cout << result.length();
}
