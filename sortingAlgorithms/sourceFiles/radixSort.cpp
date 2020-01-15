//
// Created by Samik Biswas on 13-09-2019.
//

#include "../headerFiles/DoublyLinkedList.h"
#include <vector>

using namespace std;

void radixSort(vector<int> &originalArray) {
    vector<DoublyLinkedList *> bins(10, nullptr);

    for (int i = 0, div = 1; i < 3; ++i, div *= 10) {
        for (int j: originalArray) {
            int binNumber = (j / div) % 10;

            if (bins.at(binNumber) == nullptr) {
                bins.at(binNumber) = new DoublyLinkedList;
                bins.at(binNumber)->pushBack(j);
            } else {
                bins.at(binNumber)->pushBack(j);
            }
        }

        for (int k = 0, originalArrayIndex = 0; k < bins.size(); ++k) {
            if (bins[k] != nullptr) {
                while (bins[k]->head != nullptr) {
                    int element = bins[k]->head->data;
                    originalArray[originalArrayIndex] = element;
                    bins[k]->remove(element);
                    originalArrayIndex++;
                }
            }
        }
    }
}