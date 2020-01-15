//
// Created by samik on 1/5/2020.
//

#ifndef TREEPRACTICE_TREENODE_H
#define TREEPRACTICE_TREENODE_H


class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode (int val) : val {val}, left {nullptr}, right {nullptr} {}
};


#endif //TREEPRACTICE_TREENODE_H
