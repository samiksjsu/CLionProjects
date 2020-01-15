//
// Created by samik on 12/6/2019.
//

#ifndef ADSFINALSPRACTICE_TREENODE_H
#define ADSFINALSPRACTICE_TREENODE_H


class treeNode {

    int val;
    treeNode *left;
    treeNode *right;

public:
    treeNode(int val) : val{val}, left{nullptr}, right{nullptr} {}
};


#endif //ADSFINALSPRACTICE_TREENODE_H
