//
// Created by Samik Biswas on 16-10-2019.
//

#ifndef INC_206__REVERSE_LINKED_LIST_REVERSELIST_H
#define INC_206__REVERSE_LINKED_LIST_REVERSELIST_H

#include <deque>
using namespace std;
struct ListNode {

    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseList(ListNode* head);

#endif //INC_206__REVERSE_LINKED_LIST_REVERSELIST_H
