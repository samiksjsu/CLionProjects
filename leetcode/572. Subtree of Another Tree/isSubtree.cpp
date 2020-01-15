//
// Created by Samik Biswas on 03-11-2019.
//

#include "isSubtree.h"
#include <unordered_set>
#include <string>

string ss;
string ts;

void inorderS(TreeNode *p) {

    if (p) {
        inorderS(p->left);
        ss.push_back(p->val + '0');
        inorderS(p->right);
    } else {
        ss.push_back('*');
    }
}

void inorderT(TreeNode *p) {
    if (p) {
        inorderT(p->left);
        ts.push_back(p->val + '0');
        inorderT(p->right);
    } else {
        ts.push_back('*');
    }
}

bool isSubtree(TreeNode* s, TreeNode* t) {
    inorderS(s);
    inorderT(t);

    cout << ss << endl;
    cout << ts << endl;

    return ss.find(ts) != string::npos;

}