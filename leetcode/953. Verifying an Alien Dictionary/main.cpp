#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {

    string order = "abcdefghijklmnopqrstuvwxyz";
    vector<string> words{"apple","app"};
    unordered_map<char, int> m;
    int position = 1;

    for (char i: order) {
        m[i] = position;
        position++;
    }

    int index = 0;

    for (int k = 0; k < words.size() - 1; ++k) {
        for (int j = 0; j < words.at(k).size(); ++j) {
            if (j < words.at(k + 1).size() && words.at(k).at(j) != words.at(k + 1).at(j)) {
                int pos1 = m[words.at(k).at(j)];
                int pos2 = m[words.at(k + 1).at(j)];
                if (pos1 > pos2) {
                    cout << "False" << endl;
                    break;
                } else {
                    break;
                }
            }

            if (j < words.at(k).size() && j >= words.at(k + 1).size()) cout << "False" << endl;
        }
    }
    cout << "True" << endl;
}