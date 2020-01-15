#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <queue>

using namespace std;

struct CompareHeight {
    bool operator()(pair<string, int> &lhs, pair<string, int> &rhs) {
        if (lhs.second > rhs.second) {
            return true;
        }
        else if (lhs.second < rhs.second) {
            return false;
        }
        return lhs.first < rhs.first;
    }
};

int main() {
    int k = 2;
    vector<string> nums{"i", "love", "leetcode", "i", "love", "coding"};


    map<string, int> m;
    for (auto &i: nums) {
        if (m[i]) m[i]++;
        else m[i] = 1;
    }

    priority_queue<pair<string, int>, vector<pair<string, int>>, CompareHeight> pq;

    auto itr = m.begin();

    while (itr != m.end()) {
        cout << itr->first << " " << itr->second << endl;
        pq.push(pair<string, int>(itr->first, itr->second));
        itr++;
    }

    vector<string> result;
    while (k > 0) {
        result.push_back(pq.top().first);
        pq.pop();
        k--;
    }

    cout << "hello" << endl;
}
