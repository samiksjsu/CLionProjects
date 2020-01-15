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
    vector<Node*> bins(max + 1, new Node(0));

    for (int j = 0; j < arr.size(); ++j) {

        int valueAtJ = arr[j];

        if (bins.at(valueAtJ).data == 0){
            bins.at(valueAtJ) = Node(valueAtJ);
        } else{
            Node *temp = bins.at(valueAtJ);
            while (temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = new Node(valueAtJ);
        }
    }

}