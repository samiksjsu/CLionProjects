#include <iostream>
#include <vector>
#include "singleNumber.h"
using namespace std;

int main() {
    vector<int> arr = {0,1,0,1,0,1,99};

    cout << singleNumber(arr);
}