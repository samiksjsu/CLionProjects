#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> arr1 = {2,21,43,38,0,42,33,7,24,13,12,27,12,24,5,23,29,48,30,31};
    vector<int> arr2 = {2,42,38,0,43,21};
    vector<int> arr3{};
    int maxElement = 0;

    for(auto i: arr1){
        if (i > maxElement){
            maxElement = i;
        }
    }

    vector<int> count (maxElement + 1, -1);

    for(auto i: arr1){
        count.at(i) += 1;
    }

    for(auto i: arr2){
        while (count.at(i) != -1){
            arr3.push_back(i);
            count.at(i)--;
        }
    }

    for (int j = 0; j < maxElement + 1; ++j) {
        if (count.at(j) > -1){
            while (count.at(j) != -1){
                arr3.push_back(j);
                count.at(j)--;
            }
        }
    }

    cout << "DOne";
}