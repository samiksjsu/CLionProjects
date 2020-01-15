#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {

    vector<int> A {254,914,110,900,147,441,209,122,571,942,136,350,160,127,178,839,201,386,462,45,735,467,153,415,875,
                   282,204,534,639,994,284,320,865,468,1,838,275,370,295,574,309,268,415,385,786,62,359,78,854,944};
    int K = 200;

    sort(A.begin(), A.end());

    int max = INT_MIN;

    int i = 0;
    int j = A.size() - 1;

    while (i < j) {

        int curr = A[i] + A[j];

        if (curr < K && curr > max) {
            max = A[i] + A[j];
            i++;
        } else if (curr >= K) j--;
        else if (curr <= max) i++;
    }

    cout << max << endl;
}
