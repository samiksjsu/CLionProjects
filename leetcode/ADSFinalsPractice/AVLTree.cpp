//
// Created by samik on 12/6/2019.
//

#include "AVLTree.h"

int AVLTree::height(treeNode *p) {
    if (p == nullptr) {
        return 0;
    } else {
        int x = height(p->left);
        int y = height(p->right);

        return (x > y) ? x + 1 : y + 1;
    }
}

bool AVLTree::isBalanced(treeNode *p) {

    int x = height(p->left);
    int y = height(p->right)

    return abs(x - y) >
}

treeNode AVLTree::insert(treeNode *p, int key) {

    if (p == nullptr) {
        if (root == nullptr) {
            this->root = nre
            treeNode(key);
            return root;
        } else {
            treeNode *temp = new treeNode(key);
            return temp;
        }
    } else {
        if (key > p->val) {
            p->right = insert(p->right, key);
        } else {
            p->left = insert(p->left, key);
        }
    }
}


