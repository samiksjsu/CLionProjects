#include <iostream>
#include <vector>

using namespace std;

int trap(vector<int> &height) {
    vector<int> left(height.size(), 0);
    vector<int> right(height.size(), 0);

    left[0] = right[right.size() - 1] = 0;

    int max1 = 0;

    for (int i = 1; i < height.size(); i++) {
        left[i] = max(height[i - 1], max1);
        max1 = left[i];
    }

    max1 = 0;

    for (int i = height.size() - 2; i >= 0; i--) {
        right[i] = max(height[i + 1], max1);
        max1 = right[i];
    }

    int result = 0;

    for (int i = 0; i < height.size(); i++) {
        int temp = (min(left[i], right[i]) * 1) - height[i];
        if (temp > 0) result += temp;
    }

    return result;
}

int main() {
    vector<int> height{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

    cout << trap(height) << endl;

    cout << "Hello" << endl;
}
