//
// Created by Samik Biswas on 03-11-2019.
//

#include "Tree.h"

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

int Tree::balanceFactor(Node *p) {
    int hl = 0, hr = 0;

    hl = height(p->lChild);
    hr = height(p->rChild);

    return hl - hr;
}

Node *Tree::rInsert(Node *p, int key) {

    //This if statement though similar to the wrapper function,
    // is used when we go to either the left or the right child and find it to be null.
    // There we create a new node and then return to the caller.

    if (p == nullptr) {

        if (p == this->root) {
            this->root = new Node(key);
            this->root->height = height(this->root);
            return this->root;
        } else {
            Node *temp = new Node(key);
            temp->height = height(temp);
            return temp;
        }
    } else {
        if (key < p->data) {
            p->lChild = rInsert(p->lChild, key);
        } else {
            p->rChild = rInsert(p->rChild, key);
        }
    }

    if (balanceFactor(p) == 2 && balanceFactor(p->lChild) == 1) {
        p = llRotation(p);
    } else if (balanceFactor(p) == 2 && balanceFactor(p->lChild) == -1){
        p = lrRotation(p);
    } else if (balanceFactor(p) == -2 && balanceFactor(p->rChild) == -1) {
        p = rrRotation(p);
    } else if (balanceFactor(p) == -2 && balanceFactor(p->rChild) == 1) {
        p = rlRotation(p);
    }

    p->height = height(p);
    return p;
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

    if (balanceFactor(p) == 2 && balanceFactor(p->lChild) == 1) {
        p = llRotation(p);
    } else if (balanceFactor(p) == 2 && balanceFactor(p->lChild) == -1){
        p = lrRotation(p);
    } else if (balanceFactor(p) == 2 && balanceFactor(p->lChild) == 0) {
        p = llRotation(p);
    }else if (balanceFactor(p) == -2 && balanceFactor(p->rChild) == -1) {
        p = rrRotation(p);
    } else if (balanceFactor(p) == -2 && balanceFactor(p->rChild) == 1) {
        p = rlRotation(p);
    } else if (balanceFactor(p) == -2 && balanceFactor(p->lChild) == 0) {
        rrRotation(p);
    }

    p->height = height(p);

    return p;
}

//All the below are the balancer functions

Node *Tree::llRotation(Node *p) {
    Node *pL = p->lChild;
    Node *pLR = pL->rChild;

    pL->rChild = p;
    p->lChild = pLR;
    p->height = height(p);
    pL->height = height(pL);

    if (root == p) {
        root = pL;
    }

    return pL;
}

Node *Tree::lrRotation(Node *p) {

    Node *pL = p->lChild;
    Node *pLR = pL->rChild;

    pL->lChild = pLR->lChild;
    pL->rChild = pLR->lChild;
    p->lChild = pLR->rChild;
    pLR->rChild = p;
    pLR->lChild = pL;

    p->height = height(p);
    pL->height = height(pL);
    pLR->height = height(pLR);

    if (p == this->root) {
        this->root = pLR;
    }

    return pLR;
}

Node *Tree::rrRotation(Node *p) {

    Node *pR = p->rChild;
    Node *pRL = pR->lChild;

    p->rChild = pRL;
    pR->lChild = p;

    p->height = height(p);
    pR->height = height(pR);

    if (p == root) {
        this->root = pR;
    }

    return pR;
}

Node *Tree::rlRotation(Node *p) {

    Node *pR = p->rChild;
    Node *pRL = pR->lChild;

    p->rChild = pRL->lChild;
    pR->lChild = pRL->rChild;
    pRL->lChild = p;
    pRL->rChild = pR;

    pRL->height = height(pRL);
    p->height = height(p);
    pR->height = height(pR);

    if (p == this->root) {
        this->root = pRL;
    }

    return pRL;
}
