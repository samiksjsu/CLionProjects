//
// Created by Samik Biswas on 10-09-2019.
//
#include "../headerFiles/mergeSort.h"
int swaps = 0;

void merge(const vector<int> &left, const vector<int> &right, vector<int> &arr) {

    int leftSize = left.size();
    int rightSize = right.size();
    int finalSize = leftSize + rightSize;
    int i = 0, j = 0, k = 0;

    while (k < finalSize) {
        if (i < leftSize && j < rightSize) {
            if (right.at(j) < left.at(i)) {
                arr.at(k) = right.at(j);
                j++; k++;
                swaps += (leftSize - i);
            } else {
                arr.at(k) = left.at(i);
                i++;
                k++;
            }
        } else if (i < leftSize) {
            arr.at(k) = left.at(i);
            i++;
            k++;
        } else {
            arr.at(k) = right.at(j);
            j++;
            k++;
        }
    }
}

int mergeSort(vector<int> &arr) {

    int mid = arr.size() / 2;
    if (mid >= 1) {

        vector<int> left(arr.begin(), arr.begin() + mid);
        vector<int> right(arr.begin() + mid, arr.end());

        if (left.size() > 1) mergeSort(left);
        if (right.size() > 1) mergeSort(right);

        merge(left, right, arr);
    }
    return swaps;
}
