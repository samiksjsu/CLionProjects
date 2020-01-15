#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>
#include <unordered_set>
#include <sstream>
using namespace std;


int main() {
    string s = "1029";

    unordered_map<int, char> m;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    int count = 1;
    for(auto i: alphabet) {
        m[count] = i;
        count++;
    }

    count = 0;
    unordered_set<int> seen;
    unordered_set<int> singleSeen;
    bool singleFlag = true;

    for(int i = 0; i < s.length(); i++) {
        string s1 = s.substr(0, 1 + i);
        string s2 = s.substr(i + 1, s.length() - i);

        if(s1.at(0) == '0') {
            s1.at(0) = '2';
            s1.insert(s1.begin()+1, '7');
        }

        if(s2 != "" && s2.at(0) == '0') {
            s2.at(0) = '2';
            s2.insert(s2.begin()+1, '7');
        }

        stringstream geek1(s1);
        stringstream geek2(s2);

        int a, b;
        geek1 >> a;
        geek2 >> b;
        if (s2 == "") b = 0;
        if (m[a] && m[b]) count++;
        if ((m[a]) && s2 == "" && s.length() > 1) count++;
        seen.insert(a);
        seen.insert(b);

        string temp = to_string(s.at(i) - '0');
        stringstream g (temp);
        int t = 0;
        g >> t;
        if (!m[t]) {
            singleFlag = false;
        }
    }

    if (singleFlag && s.length() > 2 ) count++;
    cout << count << endl;
    cout << "Hello" << endl;
}
