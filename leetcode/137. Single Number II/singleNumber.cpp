//
// Created by Samik Biswas on 08-10-2019.
//

#include "singleNumber.h"
#include <unordered_map>
using namespace std;

int singleNumber(vector<int>& nums){

    unordered_map<int , int> s;

    for(int i: nums){
        if (s.find(i) == s.end()){
            s[i] = 1;
        } else {
            s.find(i)->second += 1;
            if (s.find(i)->second == 3){
                s.erase(i);
            }
        }
    }

    return s.begin()->first;
}