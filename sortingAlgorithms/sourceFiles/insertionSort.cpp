//
// Created by Samik Biswas on 07-09-2019.
//
#include "../headerFiles/insertionSort.h"

void insertionSort(vector<int> &arr) {

    int toCheck = 0;
    long swaps = 0;

    for (int i = 1; i < (arr.size()); ++i) {

        toCheck = arr[i];
        for (int j = i; j > 0; --j) {
            if (arr[j - 1] > toCheck) {
                arr[j] = arr[j - 1];
                arr[j - 1] = toCheck;
                ++swaps;
            } else {
                break;
            }
        }
    }

    cout<<swaps<<endl;
}

/*void insertionSortUsingLinkedList(DoublyLinkedList &list) {

    for (int i = 0; i < (list.size - 1); ++i) {

        Node *iterator = list.head;
        int iteratorShift = 0;
        //For insertion sort we always consider the first element to be sorted
        //So, we directly move to the second element
        while (iteratorShift != (i + 1)) {
            iterator = iterator->next;
            iteratorShift += 1;
        }

        while ((iterator->previous != nullptr) && (iterator->previous->data > iterator->data)) {
            if (iterator->previous->previous == nullptr) {
                list.head = iterator;
            }
            iterator->previous->next = iterator->next;
            if (iterator->next != nullptr) {
                iterator->next->previous = iterator->previous;
            }
            iterator->next = iterator->previous;
            iterator->previous = iterator->next->previous;
            iterator->next->previous = iterator;
            if (iterator->previous != nullptr) {
                iterator->previous->next = iterator;
            }

        }
    }
}*/
