#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>

using namespace std;

int main() {

    vector<int> nums{1, 1, 1, 2, 2, 2, 3, 3, 3};
    int K = 3;

    unordered_map<int, int> m;
    map<float, int> freq;

    for (int i = 0; i < nums.size(); i++) {
        if (m.find(nums[i]) != m.end()) m.find(nums.at(i))->second++;
        else m[nums.at(i)] = 1;
    }

    vector<int> result;

    float counter = 0.1;

    for (auto itr: m) {
        if (freq.find(itr.second) != freq.end()) {
            freq[itr.second + counter] = itr.first;
            counter += 0.1;
        } else {
            freq[itr.second] = itr.first;
        }
    }

    auto itr1 = freq.rbegin();
    int count = 0;
    while (count < K) {
        cout << itr1->second << endl;
        result.push_back(itr1->second);
        count++;
        itr1--;
    }
}
