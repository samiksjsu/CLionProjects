#include <iostream>
#include <vector>
#include "moveZeroes.h"
using namespace std;

int main() {
    vector<int> nums {0,0,1};

    moveZeroes(nums);

    for(int i: nums){
        cout << i << " ";
    }
}