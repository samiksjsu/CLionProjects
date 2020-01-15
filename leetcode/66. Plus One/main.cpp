#include <iostream>
#include <vector>
#include "plusOne.h"
using namespace std;

int main() {
    vector<int> arr {0,0,0};

    plusOne(arr);

    for(int i: arr){
        cout << i << " ";
    }
}