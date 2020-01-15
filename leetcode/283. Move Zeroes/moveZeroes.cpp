//
// Created by Samik Biswas on 08-10-2019.
//

#include "moveZeroes.h"

void moveZeroes(vector<int>& nums) {

    int size = nums.size();
    int count = 0;

    for (int i = 0; i < nums.size(); ++i) {

        if (nums.at(i) == 0){
            count++;
            nums.erase(nums.begin() + i - 1);
            i = i - 1;
        }
    }


    for (int j = 0; j < count; ++j) {
        nums.push_back(0);
    }
}
