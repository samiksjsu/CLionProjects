//
// Created by Samik Biswas on 06-09-2019.
//
#include <vector>

using namespace std;

void swap(int &i, int &j){
    int temp = j;
    j = i;
    i = temp;
}

void bubbleSortWithArray(int *arr, int num) {
    int swaps = 0;
    for (int i = 0; i < (num - 1); ++i) {
        int flag = 0;
        for (int j = 0; j < (num - i - 1); ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                flag = 1;
                swaps += 1;
            }
        }

        if(flag == 0){
            break;
        }
    }
    cout<<"The array is sorted in " <<swaps << " swaps."<<endl;
}

void bubbleSortWithVectors(vector<int> &arr) {

    int swaps;
    int num = arr.size();
    for (int i = 0; i < (num - 1); ++i) {

        swaps = 0;

        for (int j = 0; j < (num - i - 1); ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swaps = 1;
            }
        }

        if(swaps == 0){
            break;
        }
    }
}
