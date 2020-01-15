#include <iostream>
#include <vector>
#include "Tree.h"
#include <algorithm>
using namespace std;

int main() {
    /*Tree t1;

    *//*t1.rInsertWrapper(50);
    t1.rInsertWrapper(20);
    t1.rInsertWrapper(10);*//*

    vector<int> nums {30, 20, 40, 10};

    for(int element : nums) {
        t1.rInsert(element);
    }

    cout << "Hello" << endl;

    t1.deleteKey(40);

    cout << "Hello" << endl;*/

    vector<int> nums1 {1,2,5,6,9};
    vector<int> nums2 {2,5,8,10};

    vector<int> result;
    std::merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), back_inserter(result));

    merge_

    for(int i: result) {
        cout << i << " ";
    }

}