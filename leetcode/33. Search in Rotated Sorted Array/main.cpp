#include <iostream>
#include <vector>
using namespace std;

int main() {

    int target = 0;
    vector<int> nums {4,5,6,7,0,1,2};
    int low = 0;
    int high = nums.size() - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (nums.at(mid) == target) return mid;

        if (nums.at(mid) >= nums.at(high)) {
            if (target <= nums.at(mid) && target >= nums.at(low)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        } else {
            if (target >= nums.at(mid) && target <= nums.at(high)) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }

    return -1;
}