//
// Created by Samik Biswas on 05-09-2019.
//

#ifndef DOUBLYLINKEDLIST_DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_DOUBLYLINKEDLIST_H

#include "Node.h"
#include <iostream>

using namespace std;

class DoublyLinkedList {

public:
    Node *head = nullptr;

    void pushBack(int data);

    void pushFront(int data);

    void pushAfter(int element, int data);

    void remove(int element);

    void print();
};

void DoublyLinkedList::pushFront(int data) {
    Node *temp = new Node(data);

    if (head == nullptr) {
        temp->next = head;
        head = temp;
    } else {
        temp->next = head;
        head->previous = temp;
        head = temp;
    }
    cout << data << " added successfully" << endl;
}

void DoublyLinkedList::pushBack(int data) {

    if (head == nullptr) {
        pushFront(data);
    } else {
        Node *temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = new Node(data);
        (temp->next)->previous = temp;
        cout << data << " added successfully" << endl;
    }
}

void DoublyLinkedList::pushAfter(int element, int data) {

    if (head == nullptr) {
        cout << "The list is empty" << endl;
    } else {
        Node *temp = head;
        bool elementFound = true;

        while (temp->data != element) {

            if (temp->next == nullptr) {
                cout << "The element does not exist in the list" << endl;
                elementFound = false;
                break;
            }
            temp = temp->next;
        }

        if (elementFound) {
            Node *newElement = new Node(data);
            (temp->next)->previous = newElement;
            newElement->next = temp->next;
            newElement->previous = temp;
            temp->next = newElement;
            cout << data << " added successfully" << endl;
        }

    }

}

void DoublyLinkedList::remove(int element) {
    if (head == nullptr) {
        cout << "The list is empty" << endl;
    } else {
        Node *temp = head;
        bool elementFound = true;

        while (temp->data != element) {

            if (temp->next == nullptr) {
                cout << "The element does not exist in the list" << endl;
                elementFound = false;
                break;
            }
            temp = temp->next;
        }
        if (elementFound && (temp == head)) {
            head = temp->next;
            (temp->next)->previous = nullptr;
            cout << element << " removed successfully" << endl;
        } else if (elementFound && (temp != head)) {
            (temp->previous)->next = temp->next;
            (temp->next)->previous = temp->previous;
            delete temp;
            cout << element << " removed successfully" << endl;
        }
    }
}

void DoublyLinkedList::print() {

    if (head == nullptr) {
        cout << "The list is empty." << endl;
    } else {

        Node *iterator = head;
        while (true) {

            cout << iterator->data << " ";
            if (iterator->next == nullptr) {
                break;
            }
            iterator = iterator->next;
        }

        cout << endl;
    }
}

#endif //DOUBLYLINKEDLIST_DOUBLYLINKEDLIST_H
