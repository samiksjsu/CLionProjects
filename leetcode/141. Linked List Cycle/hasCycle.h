//
// Created by Samik Biswas on 09-10-2019.
//

#ifndef INC_141__LINKED_LIST_CYCLE_HASCYCLE_H
#define INC_141__LINKED_LIST_CYCLE_HASCYCLE_H

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr){}
};
bool hasCycle(ListNode *head);

#endif //INC_141__LINKED_LIST_CYCLE_HASCYCLE_H
