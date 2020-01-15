#include <iostream>
#include <vector>
#include <string>
#include "mostCommonWord.h"

using namespace std;
int main() {

    string paragraph = "Bob";
    vector<string> banned {""};

    cout << mostCommonWord(paragraph, banned);
}