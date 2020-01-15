#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> arr {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9,10,11,12}
    };

    int cRLimit = arr.at(0).size() - 1;
    int cLLimit = 0;
    int rDLimit = arr.size() - 1;
    int rULimit = 0;

    int count = 1;

    while (true) {

        if (count == 1) {
            for (int j = cLLimit; j <= cRLimit; j++) {

                cout << arr[rULimit][j] << endl;
                if (j == cRLimit) {
                    rULimit++;
                    count = 2;
                }
            }

        }
        if (count != 2) break;

        if (count == 2) {
            for (int i = rULimit; i <= rDLimit; i++) {
                cout << arr[i][cRLimit] << endl;
                if (i == rDLimit) {
                    cRLimit--;
                    count = 3;
                }
            }

        }
        if (count != 3) break;

        if (count == 3) {
            for (int k = cRLimit; k >= cLLimit; k--) {
                cout << arr[rDLimit][k] << endl;
                if(k == cLLimit) {
                    rDLimit--;
                    count = 4;
                }
            }

        }
        if (count != 4) break;

        if (count == 4) {
            for (int l = rDLimit; l >= rULimit; l--) {
                cout << arr[l][cLLimit] << endl;
                if (l == rULimit) {
                    cLLimit++;
                    count = 1;
                }
            }
        }

        if (count != 1) break;
    }
}