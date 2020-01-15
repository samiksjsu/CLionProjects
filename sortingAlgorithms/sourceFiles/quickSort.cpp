#include <vector>
using namespace std;

void swap(int &i, int &j){
    int temp = j;
    j = i;
    i = temp;
}

int partition (vector<int> &arr, int low, int high)
{
    int pivot = low;

    int partition = low + 1;

    for (int i = low + 1; i <= high; ++i) {
        if (arr.at(i) <= arr.at(pivot)){
            swap(arr.at(i), arr.at(partition));
            partition++;
        }
    }
    swap(arr.at(partition - 1), arr.at(pivot));
    return partition - 1;
}

void quickSort(vector<int> &arr, int start, int end){

    if (start < end) {

        int pIndex = partition(arr, start, end);
        quickSort(arr, start, pIndex - 1);//Provide the length for the left side
        quickSort(arr, pIndex + 1, end);//Provide the length for right side
    }
}