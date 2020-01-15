//
// Created by Samik Biswas on 08-10-2019.
//

#include "deleteDuplicates.h"

ListNode* deleteDuplicates(ListNode* head){

    ListNode *itr1 = head;
    ListNode *head2 = nullptr;

    if (itr1 != nullptr){
        head2 = new ListNode(itr1->val);
    } else {
        return head;
    }

    ListNode *itr2 = head2;

    while (itr1->next != nullptr){

        if(itr1->val != itr2->val){
            itr2->next = new ListNode(itr1->val);
            itr2 = itr2->next;
        }
        itr1 = itr1->next;
    }

    return head2;

}