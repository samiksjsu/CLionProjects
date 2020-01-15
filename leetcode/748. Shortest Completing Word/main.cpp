#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {

    string licensePlate = "1s3 PSt";
    vector<string> words {"step", "steps", "stripe", "stepple"};

    unordered_map<char, int> l;

    for(char i: licensePlate) {
        if(isalpha(i) && i != ' ') {
            if(l[tolower(i)]) {
                l[tolower(i)] += 1;
            } else {
                l[tolower(i)] = 1;
            }
        }
    }

    int index = 0;
    bool IsFound = true;
    string result = "";

    for(auto i: words) {
        auto itr = l.begin();
        while (itr != l.end()) {
            if(i.find(itr->second) != string::npos) {
                IsFound = false;
                break;
            }
            itr++;
        }

        if (IsFound) {
            result = i;
        }
    }

}