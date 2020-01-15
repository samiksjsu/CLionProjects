#include <iostream>
#include "isSubtree.h"

int main() {
    string s1 = "034125";
    string s2 = "412";

    if (s1.find(s2) != string::npos) {
        cout << "found";
    } else {
        cout << "not found";
    }
}