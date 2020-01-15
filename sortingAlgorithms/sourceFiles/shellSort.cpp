//
// Created by Samik Biswas on 13-09-2019.
//
#include <vector>

using namespace std;

void swap(vector<int> &originalArray, int index1, int index2) {
    int temp = originalArray[index2];
    originalArray[index2] = originalArray[index1];
    originalArray[index1] = temp;
}

void shellSort(vector<int> &originalArray) {

    int gap, i, j, temp;

    for (gap = originalArray.size() / 2; gap >= 1; gap /= 2) {
        for (i = gap; i < originalArray.size(); i++) {
            temp = originalArray[i];
            j = i - gap;
            while (j >= 0 && originalArray[j] > temp) {
                originalArray[j + gap] = originalArray[j];
                j = j - gap;
            }
            originalArray[j + gap] = temp;

        }
    }

}