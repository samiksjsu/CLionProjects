#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {

    vector<int> packages {1, 25, 35, 59, 50, 60};
    int truckSpace = 90;
    int usableSpace = truckSpace - 30;
    unordered_map<int, int> m;
    vector<int> result (2, 0);

    for (int i = 0; i < packages.size(); ++i) {
        int element = packages.at(i);
        int elementToBeSearched = usableSpace - element;

        if (m.find(elementToBeSearched) != m.end()) {
            result.at(0) = (m.find(elementToBeSearched)->second);
            result.at(1) = i;
        } else {
            m[element] = i;
        }
    }

    cout << "Hello";


}