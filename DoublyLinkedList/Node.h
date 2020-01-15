//
// Created by Samik Biswas on 05-09-2019.
//

#ifndef DOUBLYLINKEDLIST_NODE_H
#define DOUBLYLINKEDLIST_NODE_H

struct Node{
    int data;
    Node *next = nullptr;
    Node *previous = nullptr;

    Node(int data = 0);
};

Node::Node(int data):data {data}, next {nullptr}, previous{nullptr}{}

#endif //DOUBLYLINKEDLIST_NODE_H
