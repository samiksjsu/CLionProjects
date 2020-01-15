#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    unordered_map<int, int> m;
    vector<int> nums{-4, -2, -2, -2, 0, 1, 2, 2, 2, 3, 3, 4, 4, 6, 6};
    vector<vector<int>> result;

    for (auto i: nums) {
        if (m.find(i) != m.end()) {
            m.find(i)->second++;
        } else {
            m[i] = 1;
        }
    }
    unordered_set<string> s;

    for (int j = 0; j < nums.size(); ++j) {
        vector<int> tempResult;
        auto itr1 = nums.begin() + j;
        auto itr2 = nums.end() - 1;

        while (itr1 < itr2) {
            int temp = *itr1 + *itr2;
            int search = -1 * temp;

            if (m.find(search) != m.end()) {

                if (*itr1 == search && *itr2 != search && m.find(*itr1)->second >= 2) {
                    tempResult = {*itr1, *itr2, search};
                    string r = to_string(*itr1) + to_string(*itr2) + to_string(search);
                    sort(r.begin(), r.end());

                    if (s.find(r) == s.end()) {
                        result.push_back(tempResult);
                        s.insert(r);
                    }
                } else if (*itr1 == search && *itr2 == search && m.find(*itr1)->second > 2) {
                    tempResult = {*itr1, *itr2, search};
                    string r = to_string(*itr1) + to_string(*itr2) + to_string(search);
                    sort(r.begin(), r.end());

                    if (s.find(r) == s.end()) {
                        result.push_back(tempResult);
                        s.insert(r);
                    }
                } else if (*itr2 == search && *itr1 != search && m.find(*itr2)->second >= 2) {
                    tempResult = {*itr1, *itr2, search};
                    string r = to_string(*itr1) + to_string(*itr2) + to_string(search);
                    sort(r.begin(), r.end());

                    if (s.find(r) == s.end()) {
                        result.push_back(tempResult);
                        s.insert(r);
                    }
                } else if (*itr1 != search && *itr2 != search) {
                    tempResult = {*itr1, *itr2, search};
                    string r = to_string(*itr1) + to_string(*itr2) + to_string(search);
                    sort(r.begin(), r.end());

                    if (s.find(r) == s.end()) {
                        result.push_back(tempResult);
                        s.insert(r);
                    }
                }


            }

            itr1++;
            itr2--;
        }
    }


    cout << "hello";
}