//
// Created by Samik Biswas on 08-10-2019.
//

#include "singleNumber.h"
#include <unordered_set>
int singleNumber(vector<int>& nums) {

    unordered_set<int> s;

    for(int i: nums){
        if (s.find(i) != s.end()){
            s.erase(i);
        } else {
            s.insert(i);
        }
    }

    return *s.begin();

}