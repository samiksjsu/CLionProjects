//
// Created by Samik Biswas on 02-11-2019.
//

#include "Tree.h"
#include <stack>

Node *createTrees(vector<int> &nums, int start, int end) {
    if (start > end) {
        return nullptr;
    }
    int mid = (start + end) / 2;

    Node *root = new Node(nums.at(mid));

    root->lChild = createTrees(nums, start, mid - 1);
    root->rChild = createTrees(nums, mid + 1, end);

    return root;
}

void Tree::createTreeFromArray(vector<int> nums, int l, int h) {
    this->root = createTrees(nums, l, h);
}

void Tree::inOrderRecursive(Node *p) {

    if (p) {
        inOrderRecursive(p->lChild);
        cout << p->data << " ";
        inOrderRecursive(p->rChild);
    }
}

int Tree::height(Node *p) {

    int x = 0, y = 0;

    if (p == nullptr) {
        return 0;
    }

    x = height(p->lChild);
    y = height(p->rChild);

    if (x > y) {
        return x + 1;
    } else {
        return y + 1;
    }
}

bool Tree::rSearch(Node *root, int key) {
    Node *current = root;

    if (current == nullptr) {
        return false;
    }

    if (current->data == key) {
        return true;
    } else {
        if (key < current->data) {
            return rSearch(current->lChild, key);
        } else {
            return rSearch(current->rChild, key);
        }
    }
}

void Tree::insert(Node *root, int key) {

    Node *current = root, *previous = nullptr;

    if (current == nullptr) {
        this->root = new Node(key);
        return;
    }

    while (current != nullptr) {
        if (current->data == key) {
            return;
        } else {
            if (key < current->data) {
                previous = current;
                current = current->lChild;
            } else {
                previous = current;
                current = current->rChild;
            }
        }
    }

    if (key < previous->data) {
        previous->lChild = new Node(key);
    } else {
        previous->rChild = new Node(key);
    }
}

Node *Tree::rInsert(Node *root, int key) {
    if (root == nullptr) {
        Node *temp = new Node(key);
        return temp;
    } else {
        if (key < root->data) {
            root->lChild = rInsert(root->lChild, key);
        } else {
            root->rChild = rInsert(root->rChild, key);
        }
    }
    return root;
}

void Tree::rInsertWrapper(Node *root, int key) {
    if (this->root == nullptr) {
        this->root = new Node(key);
        return;
    } else {
        rInsert(root, key);
    }
}

Node *Tree::inPred(Node *root) {
    while (root->rChild != nullptr) {
        root = root->rChild;
    }
    return root;
}

Node *Tree::inSucc(Node *root) {
    while (root->lChild != nullptr) {
        root = root->lChild;
    }
    return root;
}

Node *Tree::deleteKey(Node *p, int key) {

    if (p == nullptr) {
        return nullptr;
    }

    if (p->lChild == nullptr && p->rChild == nullptr) {
        if (p == this->root) {
            this->root = nullptr;
        }
        delete p;
        return nullptr;
    }

    if (key < p->data) {
        p->lChild = deleteKey(p->lChild, key);
    } else if (key > p->data) {
        p->rChild = deleteKey(p->rChild, key);
    } else {
        if (height(p->lChild) > height(p->rChild)) {
            Node *pred = inPred(p->lChild);
            p->data = pred->data;
            p->lChild = deleteKey(p->lChild, pred->data);
        } else {
            Node *succ = inSucc(p->rChild);
            p->data = succ->data;
            p->rChild = deleteKey(p->rChild, succ->data);
        }
    }
    return p;
}

void Tree::createBSTFromPreOrder(vector<int> nums) {

    this->root = new Node(nums.at(0));

    int i = 1;
    stack<Node *> s;
    Node *current = root;
    int element = 0;
    while (i < nums.size()) {
        element = nums.at(i);

        if (element < current->data) {
            s.push(current);
            current->lChild = new Node(element);
            current = current->lChild;
            i++;
        } else {
            if ((s.empty() && element < INT16_MAX) || (element < s.top()->data)) {
                current->rChild = new Node(element);
                current = current->rChild;
                i++;
            } else {
                current = s.top();
                s.pop();
            }
        }
    }

}

void Tree::createBSTFromPostOrder(vector<int> nums) {

    int size = nums.size();
    this->root = new Node(nums.at(size - 1));
    Node *current = root;
    stack<Node*> s;
    int i = size - 2;
    int element = 0;

    while (i >= 0) {
        element = nums.at(i);

        if (element > current->data) {
            current->rChild = new Node(element);
            s.push(current);
            current = current->rChild;
            i--;
        } else {
            if ((s.empty() && element > INT16_MIN) || (element > s.top()->data)) {
                current->lChild = new Node(element);
                current = current->lChild;
                i--;
            } else {
                current = s.top();
                s.pop();
            }
        }

    }
}