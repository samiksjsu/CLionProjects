#include <iostream>
#include "isValid.h"
using namespace std;

int main() {
    string input = "[])";

    cout << boolalpha;

    cout << isValid(input);
}