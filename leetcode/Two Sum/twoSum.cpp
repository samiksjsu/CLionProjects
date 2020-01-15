//
// Created by Samik Biswas on 26-09-2019.
//
#include <unordered_map>
#include "twoSum.h"
vector<int> twoSum(vector<int>& nums, int target) {

    /*In this question, note the use of a single loop to both compare and addition at the same time.
     * 1. First we check if we have the toFind value in the hashmap. If yes we return the index of both toFind and current element.
     * 2. If not, then we add the current element.*/

    int size = nums.size();
    unordered_map<int, int> m;
    int toFind = 0;
    vector<int> resultVector;

    for (int i = 0; i < size; ++i) {
        toFind = target - nums[i];
        if (m.find(toFind) != m.end()){
            if (m.find(toFind)->second != i){
                resultVector.push_back(m.find(toFind)->second);
                resultVector.push_back(i);
                break;
            }
        }
        m[nums.at(i)] = i;

    }

    return resultVector;
}