//
// Created by Samik Biswas on 11-09-2019.
//
#include "../headerFiles/countSort.h"
using namespace std;

void countSort(vector<int> &arr){

    int largestElement = 0;
    int size = arr.size();

    for (int i: arr){
        if (i > largestElement){
            largestElement = i;
        }
    }

    vector<int> countArr (largestElement + 1, 0);
    int element = 0;

    for (int j = 0; j < size; ++j) {
        element = arr.at(j);
        countArr.at(element) += 1;
    }

    for (int j = 0, k = 0; j < largestElement + 1; ++j) {
        while (countArr.at(j) > 0){
            arr.at(k) = j;
            k++;
            countArr.at(j)--;
        }
    }
}
