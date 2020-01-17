#include <iostream>
#include <vector>

using namespace std;
vector<vector<int>> result;

vector<vector<int>> helper(vector<int> nums) {

    vector<vector<int>> tempResult;

    if (nums.size() == 1) {
        vector<int> temp {nums.at(0)};
        tempResult.push_back(temp);
        return tempResult;
    }

    if (nums.size() == 2) {
        vector<vector<int>> tempVector;
        tempVector.push_back(nums);
        int temp = nums[1];
        nums[1] = nums[0];
        nums[0] = temp;
        tempVector.push_back(nums);
        return tempVector;
    }



    for (int i = 0; i < nums.size(); i++) {
        vector<int> temp1(nums.begin(), nums.begin() + i);
        vector<int> temp2(nums.begin() + i + 1, nums.end());
        temp1.insert(temp1.end(), temp2.begin(), temp2.end());

        vector<vector<int>> tempVector = helper(temp1);
        for (auto &v: tempVector) {
            v.push_back(nums.at(i));
            tempResult.push_back(v);
        }
    }

    return tempResult;

}

int main() {
    vector<int> nums{1, 2, 3, 4};

    vector<vector<int>> result = helper(nums);

    cout << "Hello" << endl;
}
