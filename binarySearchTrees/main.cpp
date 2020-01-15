#include <iostream>
#include "Tree.h"

int main() {

    Tree t1;
    vector<int> nums{15, 10, 25, 20, 45, 50, 40, 30};


    t1.createBSTFromPostOrder(nums);

    cout << endl << "Hello" << endl;
}