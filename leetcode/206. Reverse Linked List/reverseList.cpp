//
// Created by Samik Biswas on 16-10-2019.
//

#include "reverseList.h"
#include <deque>

ListNode* reverseList(ListNode* head) {

    if (head == nullptr || head->next == nullptr) {
        return head;
    } else {
        ListNode *itr1 = head->next;
        ListNode *itr2 = head;
        ListNode *temp;


        itr2->next = nullptr;
        temp = itr1->next;
        itr1->next = itr2;

        itr2 = itr1;
        itr1 = temp;

        while (itr1 != nullptr) {
            //itr2->next = nullptr;
            temp = itr1->next;
            itr1->next = itr2;

            itr2 = itr1;
            itr1 = temp;
        }

        head = itr2;

    }

    return head;
}