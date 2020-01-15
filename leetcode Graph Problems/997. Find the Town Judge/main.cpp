#include <iostream>
#include <vector>
#include "1042. Flower Planting With No Adjacent.h"

using namespace std;

int main() {

    int N = 4;
    vector<vector<int>> paths = {{1, 2},
                                 {2, 3},
                                 {3, 4},
                                 {4, 1},
                                 {1, 3},
                                 {2, 4}};

    vector<int> result = gardenNoAdj(N, paths);

    for (int i: result) {
        cout << i << endl;
    }

    cout << "Hello" << endl;
}
