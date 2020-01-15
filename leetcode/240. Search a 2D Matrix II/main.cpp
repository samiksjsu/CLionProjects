#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> &arr, int target) {

    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if(arr.at(mid) == target) return mid;

        if (target < arr.at(mid)) high = mid - 1;

        if (target > arr.at(mid)) low = mid + 1;

    }

    return -1;
}

bool searchMatrix(vector<vector<int>>& matrix, int target) {


    if(matrix.size() == 0) return false;

    for(int i = 0; i < matrix.size(); i++) {
        int temp = binarySearch(matrix.at(i), target);

        if(temp != -1) {
            return true;
        }
    }

    return false;
}

int main() {
    vector<vector<int>> nums {{1,4,7,11,15},
                              {2,5,8,12,19},
                              {3,6,9,16,22},
                              {10,13,14,17,24},
                              {18,21,23,26,30}};

    cout << boolalpha;
    cout << searchMatrix(nums, 5);

    cout << "Hello";

}