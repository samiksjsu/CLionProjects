//
// Created by Samik Biswas on 03-11-2019.
//

#ifndef INC_572__SUBTREE_OF_ANOTHER_TREE_ISSUBTREE_H
#define INC_572__SUBTREE_OF_ANOTHER_TREE_ISSUBTREE_H

#include <iostream>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool isSubtree(TreeNode* s, TreeNode* t);


#endif //INC_572__SUBTREE_OF_ANOTHER_TREE_ISSUBTREE_H
