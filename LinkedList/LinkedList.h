//
// Created by Samik Biswas on 05-09-2019.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H
#include <iostream>
#include "Node.h"

using namespace std;

class LinkedList {

public:
    int size = 0;
    Node *head = nullptr;

    void pushBack(int data);
    void pushFront(int data);
    void addAfter(int element, int data);
    void removeElement(int element);
    void print();
};

void LinkedList::pushBack(int data) {

    if (head == nullptr) {
        Node *temp = new Node(data);
        head = temp;
        cout << data << " added successfully. " << endl;
    } else {
        Node *temp = head;

        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = new Node(data);
        size += 1;
        cout << data << " added successfully. " << endl;
    }
}

void LinkedList::pushFront(int data) {

    if (head == nullptr) {
        Node *temp = new Node(data);
        head = temp;
    } else {

        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }
    size += 1;
    cout << data << " added successfully at the front. " << endl;;
}

void LinkedList::addAfter(int element, int data) {

    bool elementFound = true;
    bool wantToAdd = false;
    Node *temp = head;
    while (temp->data != element) {

        if (temp->next == nullptr) {
            cout << element << " does not exist in the list. " << endl;
            elementFound = false;
            break;
        } else {
            temp = temp->next;
        }
    }

    if (elementFound) {
        Node *nextElement = temp->next;
        temp->next = new Node(data);
        temp = temp->next;
        temp->next = nextElement;
        size += 1;
        cout << data << " added successfully. " << endl;
    } else {
        cout << "Do you want to add it?"
                " 0 = No, 1 = Yes" << endl;
        cin >> wantToAdd;
        if (wantToAdd) {
            this->pushBack(element);
        }
    }

}

void LinkedList::removeElement(int element) {
    bool elementFound = true;
    Node *temp = head;
    Node *previous = nullptr;
    while (temp->data != element) {

        if (temp->next == nullptr) {
            cout << element << " does not exist in the list" << endl;
            elementFound = false;
            break;
        } else {
            if ((temp->next)->data == element) {
                previous = temp;
            }
            temp = temp->next;
            size -= 1;
        }
    }

    if (elementFound) {
        previous->next = temp->next;
        delete temp;
        cout << element << " removed successfully. " << endl;
    }
}

void LinkedList::print() {
    Node *temp = head;
    /*do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp->next != nullptr);*/

    if (head == nullptr) {
        cout << "The list is empty." << endl;
    } else{
        cout<<"The elements in the list are: ";
        while (true) {
            cout << temp->data << " ";
            if (temp->next == nullptr) {
                cout << endl;
                break;
            } else {
                temp = temp->next;
            }
        }
    }
}

#endif //LINKEDLIST_LINKEDLIST_H
