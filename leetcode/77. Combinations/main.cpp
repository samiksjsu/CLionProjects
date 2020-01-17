#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> helper(vector<int> nums, int k) {

    vector<vector<int>> result;

    if (k == 1) {
        for(auto &i: nums) {
            vector<int> temp;
            temp.push_back(i);
            result.push_back(temp);
        }
        return result;
    }

    for (int j = 0; j < nums.size(); ++j) {
        vector<int> temp (nums.begin() + j + 1, nums.end());
        vector<vector<int>> tempResult = helper(temp, k - 1);

        for(auto &v: tempResult) {
            v.push_back(nums[j]);
            result.push_back(v);
        }
    }

    return result;

}

int main() {
    vector<int> nums {1, 2, 3, 4};

    vector<vector<int>> result = helper(nums, 3);

    cout << "Hello" << endl;
}
