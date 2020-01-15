//
// Created by Samik Biswas on 05-10-2019.
//

#ifndef TREES_NODE_H
#define TREES_NODE_H


class Node {

public:
    Node *lChild;
    int data;
    Node *rChild;

    Node(int data = -1) : data{data}, lChild{nullptr}, rChild{nullptr} {}
};


#endif //TREES_NODE_H
