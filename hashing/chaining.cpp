//
// Created by Samik Biswas on 24-09-2019.
//
#include <vector>
#include <iostream>
#include "chaining.h"
#include "node.h"

using namespace std;

hashMap::hashMap() {

    this->map = new vector<node *> (10, nullptr);
}


void hashMap::addKeyVector(vector<int> &keys) {

    int size = keys.size();
    this->map->resize(size*2);

    int index = 0;
    for (int k: keys) {
        index = k % 10;

        if (map->at(index) == nullptr) {
            map->at(index) = new node(k);
        } else {
            node *itr = map->at(index);
            while (itr->next != nullptr && itr->next->data < k) {
                itr = itr->next;
            }
            if (itr->next != nullptr) {
                node *temp = itr->next;
                itr->next = new node(k);
                itr->next->next = temp;
            } else {
                itr->next = new node(k);
            }
        }
    }
}

void hashMap::addKey(int key) {
    int index = key % 10;

    if (map->at(index) == nullptr) {
        map->at(index) = new node(key);
    } else {
        node *itr = map->at(index);
        while (itr->next != nullptr && itr->next->data < key) {
            itr = itr->next;
        }
        if (itr->next != nullptr) {
            node *temp = itr->next;
            itr->next = new node(key);
            itr->next->next = temp;
        } else {
            itr->next = new node(key);
        }
    }
}

bool hashMap::find(int key) {
    int index = key % 10;

    node *itr = map->at(index);

    if (itr->data == key) {
        cout << "Key found";
        return true;
    } else {
        while (itr->next != nullptr) {
            itr = itr->next;
            if (itr->data == key) {
                cout << "Key found";
                return true;
            }
        }
    }

    cout << "Key not found" << endl;
    return false;

}

