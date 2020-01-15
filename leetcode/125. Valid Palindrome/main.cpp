#include <iostream>
#include <string>
using namespace std;

int main() {

    string s = "0P";
    if (s.empty()) cout << "true" << endl;

    auto itr1 = s.begin();
    auto itr2 = s.end() - 1;

    while (itr1 < itr2) {
        if (!isalnum(*itr1)) {
            itr1++;
            continue;
        }
        if (!isalnum(*itr2)) {
            itr2--;
            continue;
        }

        if (tolower(*itr1 )!= tolower(*itr2)) {
            cout << false;
        }
        itr1++;
        itr2--;
    }

    cout << true;
}