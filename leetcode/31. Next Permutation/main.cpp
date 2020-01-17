#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
void nextPermutation(vector<int>& nums) {

    if (nums.size() == 0 || nums.size() == 1) return;

    auto itr = nums.end() - 1;

    while(itr > nums.begin() && *itr < *(itr - 1)) itr--;

    if (itr == nums.begin() && *itr < *(itr - 1)) {
        sort(nums.begin(), nums.end());
    }

    int j = nums.size() - 1;
    while (nums[j] < *(itr - 1)) j--;

    int temp = *(itr - 1);
    *(itr - 1) = nums[j];
    nums[j] = temp;

    sort(itr, nums.end());

}

int main() {
    vector<int> nums {1, 1};

    nextPermutation(nums);

    cout << "hello"<< endl;
}
