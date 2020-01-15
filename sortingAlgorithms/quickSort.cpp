//
// Created by samik on 12/12/2019.
//

#include "quickSort.h"

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr.at(high);

    int i = low - 1;

    for (int j = low; j < high; ++j) {
        if (arr.at(j) < pivot) {
            i++;

            int temp = arr.at(j);
            arr.at(j) = arr.at(i);
            arr.at(i) = temp;
        }
    }
    arr.at(high) = arr.at(i + 1);
    arr.at(i + 1) = pivot;

    return (i + 1);
}

void quickSort(vector<int> &arr, int low, int high) {

    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi -1);
        quickSort(arr, pi + 1, high);
    }
}