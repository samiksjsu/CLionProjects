/*
//
// Created by Samik Biswas on 24-09-2019.
//
#include <iostream>
#include "linearProbing.h"

using namespace std;

void hashMap::addKeysByLinerProbing(vector<int> &keys) {

    int index = 0;
    int size = keys.size();
    //Note that the load factor needs to be <= 0.5,
    // which means we need to create an array at least twice the number of keys.
    // But in this case, for simplicity we have created an array of 10.

    this->hashMap = new vector<int>(size * 2, -1);

    for(int k : keys){
        index = k % 10;

        if ((*hashMap)[index] != -1){
            int i = 1;
            int newIndex = (k + i) % 10;
            while ((*hashMap)[newIndex] != -1){
                i++;
                newIndex = (index + i) % 10;
            }
            (*hashMap)[newIndex] = k;
        } else {
            (*hashMap)[index] = k;
        }
    }
}

void hashMap::find(int key) {

    int index = key % 10;

    if ((*hashMap)[index] == key){
        cout << "Key Found" << endl;
    } else {
        int i = 1;
        int newIndex = (key + i) % 10;
        while (true){

            if ((*hashMap)[newIndex] == key){
                cout << "Key found" << endl;
                break;
            }
            else if ((*hashMap)[newIndex] == -1){
                cout << "Key not present" << endl;
                break;
            } else if (i > 10){
                break;
            }
            i++;
            newIndex = (key + i) % 10;
        }
    }
}

void hashMap::deleleKey(int key) {
    int index = key % 10;

    if ((*hashMap)[index] == key){
        (*hashMap)[index] *= -1; //if the key is found, multiply with -1 to make it invalid.
    } else {
        int i = 1;
        int newIndex = (key + i) % 10;
        while (true){

            if ((*hashMap)[newIndex] == key){
                (*hashMap)[newIndex] *= -1;
                cout << "Key found and deleted" << endl;
                break;
            }
            else if ((*hashMap)[newIndex] == -1){
                cout << "Key not present" << endl;
                break;
            } else if (i > 10){
                break;
            }
            i++;
            newIndex = (key + i) % 10;
        }
    }
}
*/
