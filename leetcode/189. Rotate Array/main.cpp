#include <iostream>
#include "rotate.h"

int main() {

    vector<int> nums {1,2,3,4,5,6,7};

    rotate(nums, 3);

    for (auto i: nums) {
        cout << i << " ";
    }
}