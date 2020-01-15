//
// Created by Samik Biswas on 02-11-2019.
//

#ifndef BINARYSEARCHTREES_TREE_H
#define BINARYSEARCHTREES_TREE_H

#include <vector>
#include <iostream>
using namespace std;

class Node {

public:
    Node *lChild;
    int data;
    Node *rChild;

    Node(int data = -1) : data{data}, lChild{nullptr}, rChild{nullptr} {}
};

class Tree {

public:
    Node *root;

    Tree():root{nullptr}{}

    void createTreeFromArray(vector<int>, int l, int h);
    void inOrderRecursive(Node *root);
    int height(Node *root);
    bool rSearch(Node *root, int key);
    void insert(Node *root, int key);
    Node* rInsert(Node* root, int key);
    void rInsertWrapper(Node* root, int key);
    Node* inSucc(Node* root);
    Node* inPred(Node* root);
    Node* deleteKey(Node *root, int key);
    void createBSTFromPreOrder(vector<int> nums);
    void createBSTFromPostOrder(vector<int> nums);
};


#endif //BINARYSEARCHTREES_TREE_H
