#include <iostream>
#include <string>
#include "isAnagram.h"
using namespace std;

int main() {
    string s = "rat", t = "car";

    cout << isAnagram(s, t);
}