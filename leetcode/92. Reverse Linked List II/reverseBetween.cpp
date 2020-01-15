//
// Created by Samik Biswas on 12-11-2019.
//

#include "reverseBetween.h"

ListNode* reverseBetween(ListNode* head, int m, int n) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    bool foundM = false;
    bool foundN = false;


    ListNode *itr = head;
    ListNode *itrM = nullptr;
    ListNode *itr2 = itr->next;
    ListNode *itr3 = itr2->next;
    ListNode *temp = itr3->next;

    while(itr->next != nullptr) {
        if (itr->next->val != m && !foundM) {
            itr = itr->next;
            continue;
        }
        itrM = itr->next;
        foundM = true;

        itr2 = itr->next;
        itr3 = itr2->next;
        temp = itr3->next;
        itr3->next = itr2;
        itr2->next = nullptr;
        itr2 = itr3;
        itr3 = temp;

    }

    return head;
}