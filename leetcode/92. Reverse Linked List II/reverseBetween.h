//
// Created by Samik Biswas on 12-11-2019.
//

#ifndef INC_92__REVERSE_LINKED_LIST_II_REVERSEBETWEEN_H
#define INC_92__REVERSE_LINKED_LIST_II_REVERSEBETWEEN_H
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseBetween(ListNode* head, int m, int n);

#endif //INC_92__REVERSE_LINKED_LIST_II_REVERSEBETWEEN_H
