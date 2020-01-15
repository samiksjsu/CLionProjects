//
// Created by Samik Biswas on 10-11-2019.
//

#include "maximumMinimumPath.h"

int maximumMinimumPath(vector<vector<int>> &A) {

    int size1 = A.size();
    int size2 = A.at(0).size();

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {

            if (i == 0) {
                if (j == 0) continue;


            }
        }
    }

    return A[size1 - 1][size2 - 1];
}