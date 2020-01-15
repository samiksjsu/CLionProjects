#ifndef LINKEDLIST_NODE_H
#define LINKEDLIST_NODE_H


class Node {

public:
    int data;
    Node *next = nullptr;

    Node(int data = 0) :
            data {data}, next{nullptr} {};
};



#endif //LINKEDLIST_NODE_H