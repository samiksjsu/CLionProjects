//
// Created by samik on 1/5/2020.
//

#ifndef TREEPRACTICE_TREE_H
#define TREEPRACTICE_TREE_H

#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include "TreeNode.h"

using namespace std;

class Tree {

public:
    TreeNode *root;

    Tree() : root {nullptr} {}

    TreeNode *createTree() {

        int temp = 0;
        cout << "Enter the value of root" << endl;
        cin >> temp;

        root = new TreeNode(temp);

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty()) {

            TreeNode *tempNode = q.front();
            q.pop();

            cout << "Enter the left child of " << tempNode->val << endl;
            cin >> temp;
            if (temp != -1) {
                tempNode->left = new TreeNode(temp);
                q.push(tempNode->left);
            }

            cout << "Enter the right child of " << tempNode->val << endl;
            cin >> temp;
            if (temp != -1) {
                tempNode->right = new TreeNode(temp);
                q.push(tempNode->right);
            }

        }

        return root;
    }

    TreeNode *createTree(vector<int> &nums) {

        if (nums.size() > 0) {
            root = new TreeNode(nums.at(0));
        }

        int i = 1;
        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty() && i < nums.size()) {
            TreeNode *tempNode = q.front();
            q.pop();

            if (i < nums.size() && nums.at(i) != -1) {
                tempNode->left = new TreeNode(nums.at(i));
                q.push(tempNode->left);
                i++;
            }

            if (i < nums.size() && nums.at(i) != -1) {
                tempNode->right = new TreeNode(nums.at(i));
                q.push(tempNode->right);
                i++;
            }
        }

        return root;
    }

    TreeNode* createBST(vector<int> &nums, int start, int end) {

        while (start <= end) {
            int mid = (start + end) / 2;

            if (this->root == nullptr) {
                this->root = new TreeNode(nums.at(mid));
                root->left = createBST(nums, start, mid - 1);
                root->right = createBST(nums, mid + 1, end);
                return root;
            }

            TreeNode *temp = new TreeNode(nums.at(mid));
            temp->left = createBST(nums, start, mid - 1);
            temp->right = createBST(nums, mid + 1, end);
            return temp;
        }

        return nullptr;
    }

    TreeNode* insertNodeInBST(TreeNode *root, int val) {
        if (!root) {
            root = new TreeNode(val);
            return root;
        }

        if (val > root->val) root->right = insertNodeInBST(root->right, val);
        else root->left = insertNodeInBST(root->left, val);

        return root;
    }

    int height(TreeNode *root) {
        if (root) {
            int x = height(root->left);
            int y = height(root->right);

            return (x > y) ? x + 1 : y + 1;
        }

        return 0;
    }

    int inorderPred(TreeNode *p) {
        while (p->right) {
            p = p->right;
        }

        return p->val;
    }

    int inorderSucc(TreeNode *p) {
        while (p->left) p = p->left;

        return p->val;
    }

    TreeNode* deleteNode(TreeNode *root, int val) {

        if (root->val == val && !root->left && !root->right) {
            return nullptr;
        }

        if (root->val == val) {
            int leftTree = height(root->left);
            int rightTree = height(root->right);

            if (leftTree > rightTree) {
                int temp = inorderPred(root->left);
                root->val = temp;
                root->left = deleteNode(root->left, temp);
            } else {
                int temp = inorderSucc(root->right);
                root->val = temp;
                root->right = deleteNode(root->right, temp);
            }
        } else {
            if (val > root->val) root->right = deleteNode(root->right, val);
            else root->left = deleteNode(root->left, val);
        }

        return root;
    }

    void preOrderRecursive(TreeNode *root) {

        if (root) {
            cout << root->val << " ";
            preOrderRecursive(root->left);
            preOrderRecursive(root->right);
        }
    }

    void preOrderIterative(TreeNode *root) {

        stack<TreeNode*> s;

        while (!s.empty() || root != nullptr) {
            if (root) {
                cout << root->val << " ";
                s.push(root);
                root = root->left;
            } else {
                TreeNode *temp = s.top();
                s.pop();
                root = temp->right;
            }
        }

    }

    void inOrderRecursive(TreeNode *root) {

        if (root) {
            inOrderRecursive(root->left);
            cout << root->val << " ";
            inOrderRecursive(root->right);
        }
    }

    void inOrderIterative(TreeNode *root) {

        stack<TreeNode*> s;

        while (!s.empty() || root != nullptr) {
            if (root) {
                s.push(root);
                root = root->left;
            } else {
                TreeNode *temp = s.top();
                s.pop();
                cout << temp->val << " ";
                root = temp->right;
            }
        }
    }

    void postOrderRecursive(TreeNode *root) {

        if (root) {
            postOrderRecursive(root->left);
            postOrderRecursive(root->right);
            cout << root->val << " ";
        }
    }

    void postOrderIterative(TreeNode *root) {

        stack<TreeNode*> s1;
        stack<TreeNode*> s2;

        s1.push(root);

        while (!s1.empty()) {
            TreeNode *temp = s1.top();
            s1.pop();

            s2.push(temp);

            if (temp->left) s1.push(temp->left);
            if (temp->right) s1.push(temp->right);
        }

        while (!s2.empty()) {
            cout << s2.top()->val << " ";
            s2.pop();
        }
    }

    void levelOrderIterative(TreeNode *root) {

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode *temp = q.front();
            q.pop();

            cout << temp->val << " ";

            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);

        }

    }

    void levelOrderRecursive(TreeNode *root) {

        int depth = height(root);

        for (int i = 1; i <= depth; ++i) {
            levelOrderRecursive(root, i);
        }
    }

    void levelOrderRecursive(TreeNode *root, int height) {

        if (root) {
            if (height == 1) {
                cout << root->val << " ";
            } else {
                levelOrderRecursive(root->left, height - 1);
                levelOrderRecursive(root->right, height - 1);
            }
        }
    }
};

#endif //TREEPRACTICE_TREE_H
