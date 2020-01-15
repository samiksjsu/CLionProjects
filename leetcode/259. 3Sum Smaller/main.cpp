#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    vector<int> nums = {-2,0,1,3};
    int target = 4;

    vector<vector<int>> result;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); ++i) {

        int j = i + 1;
        int k = j + 1;

        while (j < nums.size() && k < nums.size()) {

            if (nums[j] == nums[j - 1]) {
                j++;
                continue;
            }

            int curr = nums[i] + nums[j] + nums[k];

            if (curr >= target) break;

            if (curr < target) {
                vector<int> temp = {nums[i], nums[j], nums[k]};
                result.push_back(temp);
                k++;
            }
        }

    }

    cout << result.size() << endl;
}
