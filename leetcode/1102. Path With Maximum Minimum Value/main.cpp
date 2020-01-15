#include <iostream>
#include "maximumMinimumPath.h"
using namespace std;

int main() {

    vector<vector<int>> arr {{2,2,1,2,2,2}, {1,2,2,2,1,2}};

    cout << maximumMinimumPath(arr) << endl;
}