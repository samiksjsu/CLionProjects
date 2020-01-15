#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <queue>
#include <unordered_map>
using namespace std;

void maximumSubarray(vector<int> &arr) {
    int ans = INT8_MIN;

    //This is O(n^3) complexity
    for (int subArraySize = 1; subArraySize < arr.size(); ++subArraySize) {
        for (int startIndex = 0; startIndex < arr.size(); ++startIndex) {

            if (startIndex + subArraySize > arr.size()) break;

            int sum = 0;
            for (int i = startIndex; i < (startIndex + subArraySize); ++i) {
                sum += arr.at(i);
            }
            ans = max(ans, sum);
        }

    }
    cout << ans << endl;

    ans = INT8_MIN;

    for (int startIndex = 0; startIndex < arr.size(); ++startIndex) {
        int sum = 0;
        for (int subArraySize = startIndex; subArraySize <= arr.size(); ++subArraySize) {
            if (subArraySize >= arr.size()) break;

            sum += arr.at(subArraySize);
            ans = max(ans, sum);
        }
    }

    cout << ans << endl;
}

int maxProfit(vector<int>& prices) {

    if (prices.size() <= 1) return 0;

    int currentMin = prices.at(0);
    int profit = 0;

    for (int i = 1; i < prices.size(); i++) {
        if (prices.at(i) < currentMin) currentMin = prices.at(i);

        else {
            if (prices.at(i) < prices.at(i - 1)) {
                profit += prices.at(i - 1) - currentMin;
                currentMin = prices.at(i);
            } else {
                if (i == prices.size() - 1) {
                    profit += prices.at(i) - currentMin;
                    break;
                }
            }
        }
    }

    return profit;
}

int maxProduct(vector<int>& nums) {

    int ans = INT8_MIN;

    for (int startIndex = 0; startIndex < nums.size(); ++startIndex) {
        int product = 1;
        for (int subArraySize = startIndex; subArraySize <= nums.size(); ++subArraySize) {
            if (subArraySize >= nums.size()) break;

            product *= nums.at(subArraySize);
            ans = max(ans, product);
        }
    }

    return ans;
}

vector<string> reorderLogFiles(vector<string>& logs) {
    // use stable_sort as order of equivalent elements is preserved
    stable_sort(logs.begin(), logs.end(), [](const string& a, const string& b){
        auto e1 = a.substr(a.find(' ')  + 1); // get words not including identifier
        auto e2 = b.substr(b.find(' ') + 1);

        // order if a || b are digit-logs
        if (isdigit(e1[0]) && isdigit(e2[0])) return false;
        if (isdigit(e1[0]) && !isdigit(e2[0])) return false;
        if (isdigit(e2[0]) && !isdigit(e1[0])) return true;

        // order if a && b are letter logs
        auto diff = e1.compare(e2);
        if (diff) return diff < 0;
        return a.compare(b) < 0;
    });
    return logs;
}

int minMeetingRooms(vector<vector<int>>& intervals) {

    sort(intervals.begin(), intervals.end(), [] (vector<int> a, vector<int> b){
        return a.at(0) < b.at(0);
    });

    priority_queue<int, vector<int>, greater<>> pq;

    pq.push(intervals[0][1]);

    for (int i = 1; i < intervals.size(); ++i) {
        int start = intervals[i][0];
        int end = pq.top();

        if (start >= end) {
            pq.pop();
        }

        pq.push(intervals[i][1]);
    }

    return pq.size();

}


struct CompareHeight {
    bool operator()(vector<int> &a, vector<int> &b)
    {
        // return "true" if "p1" is ordered
        // before "p2", for example:
        return a.at(1) > b.at(1);
    }
};
bool carPooling(vector<vector<int>>& trips, int capacity) {

    sort(trips.begin(), trips.end(), [] (vector<int> a, vector<int> b) {
        return a[1] < b[1];
    });

    priority_queue<vector<int>, vector<vector<int>>, CompareHeight> pq;
    int currentCapacity = 0;
    pq.push(vector<int> {trips[0][0], trips[0][2]});

    currentCapacity += trips[0][0];

    for(int i = 1; i < trips.size(); i++) {

        int start = trips[i][1];
        int end = pq.top().at(1);
        currentCapacity += trips[i][0];

        if (currentCapacity > capacity) {
            if (start < end) return false;

            else{
                while (!pq.empty()) {
                    end = pq.top().at(1);
                    int c = pq.top()[0];
                    currentCapacity -= c;
                    pq.pop();
                    if(!pq.empty()) end = pq.top().at(1);
                    if (currentCapacity > capacity && start < end) return false;
                    if(pq.empty() && currentCapacity > capacity) return false;
                    if(start < end || currentCapacity < capacity) break;
                }
            }
        }

        pq.push(vector<int> {trips[i][0], trips[i][2]});
    }

    return true;
}


void helper(vector<vector<int>> &board, int i, int j, int &count1) {

    if (i >= 0 && i < board.size() && j >= 0 && j < board[0].size()) {
        if (board[i][j] == 1) {
            count1 += 1;
        }
    }
}

vector<vector<int>> gameOfLife(vector<vector<int>>& board) {

    vector<vector<int>> result = board;

    if(board.size() == 0 || board[0].size() == 0) {
        return result;
    }

    for(int i = 0; i < board.size(); i++) {
        for(int j = 0; j < board[0].size(); j++) {

            int count1 = 0;

            helper(board, i - 1, j - 1, count1);
            helper(board, i - 1, j, count1);
            helper(board, i - 1, j + 1, count1);
            helper(board, i, j + 1, count1);
            helper(board, i + 1, j + 1, count1);
            helper(board, i + 1, j, count1);
            helper(board, i + 1, j - 1, count1);
            helper(board, i, j - 1, count1);

            if (count1 < 2 || count1 > 3) {
                result[i][j] = 0;
            } else if (count1 == 3 && board[i][j] == 0) {
                result[i][j] = 1;
            }
        }
    }

    return result;
}

void setZeroes(vector<vector<int>>& matrix) {

    vector<vector<int>> result = matrix;

    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[0].size(); j++) {
            if(matrix[i][j] == 0) {
                int ii = i, jj = j;

                while(ii < matrix.size()) {
                    result[ii][j] = -1;
                    ii++;
                }
                ii = i;
                while(ii >= 0) {
                    result[ii][j] = -1;
                    ii--;
                }

                while(jj < matrix[0].size()) {
                    result[i][jj] = -1;
                    jj++;
                }
                jj = j;
                while(jj >= 0) {
                    result[i][jj] = -1;
                    jj--;
                }
            }
        }
    }

    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[0].size(); j++) {
            if(result[i][j] == -1) {
                result[i][j] = 0;
            }
        }
    }

    matrix = result;
}

bool validPalindrome(string s) {
    bool flag = false;

    auto itr1 = s.begin();
    auto itr2 = s.end() - 1;

    while(itr1 <= itr2) {

        if(!flag && *itr1 != *itr2) {
            flag = true;
        } else if (flag && *itr1 != *itr2) {
            return false;
        }
        itr1++;
        itr2--;
    }

    return true;
}

int main() {
    //vector<string> logs = {"dig1 8 1 5 1","let1 art can","dig2 3 6","let2 own kit dig","let3 art zero"};

    string s = "abc";

    cout << boolalpha;
    cout << validPalindrome(s) << endl;

    cout << "Hello" << endl;
}