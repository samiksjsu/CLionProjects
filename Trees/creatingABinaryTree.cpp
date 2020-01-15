//
// Created by Samik Biswas on 05-10-2019.
//
#include <queue>
#include <stack>
#include "Node.h"
#include "creatingABinaryTree.h"

using namespace std;

void Tree::createTree() {
    queue<Node *> q;
    Node *p, *t;
    int x;

    cout << "Enter root value" << endl;
    cin >> x;

    root = new Node(x);

    q.emplace(root);

    while (!q.empty()) {
        p = q.front();
        q.pop();

        cout << "Enter left child of " << p->data << ": " << endl;
        cin >> x;

        if (x != -1) {
            p->lChild = new Node(x);
            q.emplace(p->lChild);
        }

        cout << "Enter right child: " << p->data << ": " << endl;
        cin >> x;

        if (x != -1) {
            p->rChild = new Node(x);
            q.emplace(p->rChild);
        }
    }
}

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

void Tree::preOrderRecursive(Node *p) {

    if (p) {
        cout << p->data << endl;
        preOrderRecursive(p->lChild);
        preOrderRecursive(p->rChild);
    }
}

void Tree::postOrderRecursive(Node *p) {

    if (p) {
        postOrderRecursive(p->lChild);
        postOrderRecursive(p->rChild);
        cout << p->data << endl;
    }
}

void Tree::inOrderRecursive(Node *p) {

    if (p) {
        inOrderRecursive(p->lChild);
        cout << p->data << " ";
        inOrderRecursive(p->rChild);
    }
}

void Tree::levelOrder(Node *p) {

    queue<Node *> q;
    cout << p->data << " ";

    q.emplace(p);
    while (!q.empty()) {
        p = q.front();
        q.pop();

        if (p->lChild) {
            cout << p->lChild->data << " ";
            q.emplace(p->lChild);
        }
        if (p->rChild) {
            cout << p->rChild->data << " ";
            q.emplace(p->rChild);
        }
    }
    cout << endl;
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

void Tree::preOrderIterative(Node *p) {

    stack<Node *> s;

    while (!s.empty() || p != nullptr) {


        if (p != nullptr) {
            cout << p->data;
            s.push(p);
            p = p->lChild;
        } else {
            p = s.top();
            s.pop();
            p = p->rChild;
        }
    }

}

void Tree::inOrderIterative(Node *p) {

    stack<Node *> s;

    while (!s.empty() || p != nullptr) {
        if (p != nullptr) {
            s.push(p);
            p = p->lChild;
        } else {
            p = s.top();
            s.pop();
            cout << p->data;
            p = p->rChild;
        }
    }
}

void Tree::postOrderIterative(Node *p) {

    //Using 1 stack
    stack<Node *> s1;
    Node *current = p;

    while (current != nullptr || !s1.empty()) {

        if (current != nullptr) {
            s1.push(current);
            current = current->lChild;
        } else {
            Node *temp = s1.top()->rChild;
            if (temp == nullptr) {
                temp = s1.top();
                s1.pop();
                cout << temp->data << " ";
                while (!s1.empty() && temp == s1.top()->rChild) {
                    temp = s1.top();
                    s1.pop();
                    cout << temp->data << " ";
                }
            } else {
                current = temp;
            }
        }
    }

    cout << endl;

    //using 2 stacks
    stack<Node *> s2;
    s1.push(p);

    while (!s1.empty()) {


        p = s1.top();
        s2.push(p);
        s1.pop();

        if (p->lChild != nullptr) s1.push(p->lChild);
        if (p->rChild != nullptr) s1.push(p->rChild);
    }

    while (!s2.empty()) {
        cout << s2.top()->data << " ";
        s2.pop();
    }
}

int Tree::countOfLeafNodes(Node *root) {

    int x = 0, y = 0;

    if (root != nullptr) {
        x = countOfLeafNodes(root->lChild);
        y = countOfLeafNodes(root->rChild);

        if (!root->lChild && !root->rChild) {
            return x + y + 1;
        } else {
            return x + y;
        }
    }
    return 0;
}

int Tree::countOfDegree1Nodes(Node *root) {

    int x = 0, y = 0;

    if (root != nullptr) {
        x = countOfDegree1Nodes(root->lChild);
        y = countOfDegree1Nodes(root->rChild);

        if ((root->lChild && !root->rChild) || (!root->lChild && root->rChild)) {
            return x + y + 1;
        } else {
            return x + y;
        }
    }
    return 0;
}

int Tree::countOfDegree2Nodes(Node *root) {
    int x = 0, y = 0;

    if (root != nullptr) {
        x = countOfDegree2Nodes(root->lChild);
        y = countOfDegree2Nodes(root->rChild);

        if (root->lChild && root->rChild) {
            return x + y + 1;
        } else {
            return x + y;
        }
    }
    return 0;
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

bool Tree::isBalanced(Node *root) {

    int x = 0, y = 0;

    x = height(root->lChild);
    y = height(root->rChild);

    return !(x != y && abs(x - y) != 1);

}



