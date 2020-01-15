//
// Created by Samik Biswas on 05-10-2019.
//

#ifndef TREES_CREATINGABINARYTREE_H
#define TREES_CREATINGABINARYTREE_H

#include <iostream>
#include <queue>
#include "Node.h"
using namespace std;

class Tree{

private:
    Node *root;

public:

    Tree():root{nullptr}{}

    void createTree();
    void createTreeFromArray(vector<int>, int l, int h);
    void preOrderRecursive(Node *root);
    void preOrderIterative(Node *root);
    void postOrderRecursive(Node *root);
    void postOrderIterative(Node *root);
    void inOrderRecursive(Node *root);
    void inOrderIterative(Node *root);
    void levelOrder(Node *root);
    int height(Node *root);
    int countOfLeafNodes(Node *root);
    int countOfDegree2Nodes(Node *root);
    int countOfDegree1Nodes(Node *root);
    bool rSearch(Node *root, int key);
    bool isBalanced(Node* root);

    //The below functions are used to call the above functions when no parameter is passed.
    //Since we cannot pass the root node from main func as that is a private member.
    void preOrderRecursive(){preOrderRecursive(root);}
    void preOrderIterative(){preOrderRecursive(root);}
    void postOrderRecursive(){postOrderRecursive(root);}
    void postOrderIterative(){postOrderIterative(root);}
    void inOrderRecursive(){inOrderRecursive(root);}
    void inOrderIterative(){inOrderIterative(root);}
    void levelOrder(){levelOrder(root);}
    int height(){return height(root);}
    int countOfLeafNodes(){return countOfLeafNodes(root);};
    int countOfDegree2Nodes(){return countOfDegree2Nodes(root);}
    int countOfDegree1Nodes(){return countOfDegree1Nodes(root);}
    bool rSearch(int key){return rSearch(root, key);}
    bool isBalanced(){return isBalanced(root);}
};

#endif //TREES_CREATINGABINARYTREE_H
