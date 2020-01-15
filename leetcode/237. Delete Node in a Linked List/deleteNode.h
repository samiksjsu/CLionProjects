//
// Created by Samik Biswas on 08-10-2019.
//

#ifndef INC_237__DELETE_NODE_IN_A_LINKED_LIST_DELETENODE_H
#define INC_237__DELETE_NODE_IN_A_LINKED_LIST_DELETENODE_H
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

void deleteNode(ListNode* node);

#endif //INC_237__DELETE_NODE_IN_A_LINKED_LIST_DELETENODE_H
