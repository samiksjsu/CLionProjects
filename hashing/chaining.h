//
// Created by Samik Biswas on 24-09-2019.
//

#ifndef HASHING_CHAINING_H
#define HASHING_CHAINING_H

#include <vector>
#include "node.h"
using namespace std;

class hashMap{
public:
    vector<node*>*map;

    hashMap();

    void addKeyVector(vector<int> &keys);
    void addKey(int key);
    bool find(int key);

};

#endif //HASHING_CHAINING_H
