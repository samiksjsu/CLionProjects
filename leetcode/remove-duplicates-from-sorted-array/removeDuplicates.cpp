//
// Created by Samik Biswas on 27-09-2019.
//

#include "removeDuplicates.h"

int removeDuplicates(vector<int>& nums) {

    int size = nums.size();
    if (size <= 1){
        return size;
    }
    int count = 1;
    int tracker = 0;
    for (int i = 0; i < size - 1; ++i) {
        tracker = nums[i];

        if (nums[i + 1] != tracker){
            count++;
        }
    }
    return count;
}
