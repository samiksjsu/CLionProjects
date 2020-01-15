//
// Created by Samik Biswas on 03-11-2019.
//

#ifndef AVL_TREES_TREE_H
#define AVL_TREES_TREE_H

#include <vector>
using namespace std;

class Node {

public:
    Node *lChild;
    int data;
    int height;
    Node *rChild;

    Node(int data = -1) : data{data}, lChild{nullptr}, rChild{nullptr}, height {0} {}
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
    Node* inSucc(Node* root);
    Node* inPred(Node* root);
    Node* deleteKey(Node *root, int key);
    void createBSTFromPreOrder(vector<int> nums);
    void createBSTFromPostOrder(vector<int> nums);

    int balanceFactor(Node* p);


    //Rotation Functions
    Node* llRotation(Node *p);

    Node* lrRotation(Node *p);

    Node* rrRotation(Node *p);

    Node* rlRotation(Node *p);

    //Wrapper functions
    void rInsert(int key){rInsert(this->root, key);};
    void deleteKey(int key){deleteKey(this->root, key);};
};


#endif //AVL_TREES_TREE_H
