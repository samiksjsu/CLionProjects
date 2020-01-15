//
// Created by Samik Biswas on 06-10-2019.
//

#ifndef INC_2__ADD_TWO_NUMBERS_ADDTWONUMBERS_H
#define INC_2__ADD_TWO_NUMBERS_ADDTWONUMBERS_H
struct ListNode {

    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);

#endif //INC_2__ADD_TWO_NUMBERS_ADDTWONUMBERS_H
