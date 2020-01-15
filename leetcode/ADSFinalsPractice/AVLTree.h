//
// Created by samik on 12/6/2019.
//

#ifndef ADSFINALSPRACTICE_AVLTREE_H
#define ADSFINALSPRACTICE_AVLTREE_H

#include <vector>
#include "treeNode.h"
using namespace std;

class AVLTree {
    treeNode *root;

public:
    int height(treeNode *p);

    bool isBalanced(treeNode *p);

    treeNode insert(treeNode *p, int key);
};


#endif //ADSFINALSPRACTICE_AVLTREE_H
