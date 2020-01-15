#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<vector<int>> arr {{7,10},{2,4}};

    sort(arr.begin(), arr.end(), [] (vector<int> a, vector<int>b) {
        return a.at(0) < b.at(0);
    });



    cout << "Hello";
}