#include <iostream>
#include <vector>
#include <string>
#include "sourceFiles/quickSort.cpp"
#include "headerFiles/countSort.h"
#include "headerFiles/mergeSort.h"


using namespace std;

int main() {
    vector<int> arr{7,6,5,4,3,8};

    mergeSort(arr);

    cout << "Hello";
}