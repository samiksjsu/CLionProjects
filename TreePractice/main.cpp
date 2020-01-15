#include <iostream>
#include "Tree.h"
using namespace std;

int main() {
    vector<int> nums {1, 2, 3, 4, 5, 6, 7, 8};

    Tree t2;
    t2.createBST(nums, 0, nums.size() - 1);

    t2.inOrderIterative(t2.root);

    t2.insertNodeInBST(t2.root, 9);

    t2.deleteNode(t2.root, 4);

    cout << "Hello" << endl;
}
