//
// Created by Samik Biswas on 12-09-2019.
//

#include <vector>
#include "../headerFiles/Node.h"

using namespace std;

void binBucketSort(vector <int> &arr){
    int max;

    for (auto k: arr){
        if (k > max){
            max = k;
        }
    }
    Node *bins[max + 1];

    for (int j = 0; j < arr.size(); ++j) {
        bins[j] = nullptr;
    }

    for (int i = 0; i < arr.size(); ++i) {
        int indexAndData = arr[i];

        if (bins[indexAndData] == nullptr){
            bins[indexAndData] = new Node(indexAndData);
        } else{
            Node *itr = bins[indexAndData];
            while (itr->next != nullptr){
                itr = itr->next;
            }

            itr->next = new Node(indexAndData);
        }
    }



}