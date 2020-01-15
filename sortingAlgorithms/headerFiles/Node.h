//
// Created by Samik Biswas on 05-09-2019.
//

#ifndef NODE_H
#define NODE_H

struct Node{
    int data;
    Node *next = nullptr;
    Node *previous = nullptr;

    Node(int data = 0);
};

#endif //NODE_H
