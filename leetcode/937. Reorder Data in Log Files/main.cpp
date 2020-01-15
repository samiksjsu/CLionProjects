#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    vector<string> logs {"l5sh 6 3869 08 1295",
                         "9 ehyjki ngcoobi mi", "0uoj 9 8896814034171",
                         "0 81650258784962331", "t3df gjjn nxbrryos b"};

    sort(logs.begin(), logs.end(), [](string &s1, string &s2) {
        int i = 0;
        int j = 0;

        while (s1.at(i) != ' ') i++;
        while (s2.at(j) != ' ') j++;

        i++;
        j++;

        if (isalpha(s1.at(i)) && isdigit(s2.at(j))) return true;

        if (isdigit(s1.at(i)) && isdigit(s2.at(j))) return false;

        if (!isdigit(s1.at(i)) && !isdigit(s2.at(j))) {

            if (s1.substr(i, s1.length() - 1) != s2.substr(j, s2.length() - 1)) {
                return s1.substr(i, s1.length() - 1) < s2.substr(j, s2.length() - 1);
            }

            return s1 < s2;
        }


        return false;


    });


    vector<vector<int>> v {{1, 2}, {6, 2}, {6, 1}, {3, 2}, {2, 3}};

    sort(v.begin(), v.end(), [](vector<int> a, vector<int> b) {

        // a is the 1st and b is the second. If we return -1 it signifies that a should come before b
        // if we return 1 then b should come before a
        if (a[0] < b[0]) return -1;

        /*else if (a[0] == b[0]) {
            if (a[1] < b[1]) return 1;
        }*/

        // If we return 0, order is maintained
        return 0;
    });

    cout << "Hello";

}