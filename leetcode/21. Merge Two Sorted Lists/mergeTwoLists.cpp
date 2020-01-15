//
// Created by Samik Biswas on 06-10-2019.
//

#include "mergeTwoLists.h"

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){

    //Note that we need to initialize each and every variable irrespective of their type.
    ListNode *final = nullptr;
    ListNode *itr1 = l1;
    ListNode *itr2 = l2;

    if (itr1 != nullptr && itr2 == nullptr){
        final = new ListNode(itr1->val);
        itr1 = itr1->next;
    } else if (itr2 != nullptr && itr1 == nullptr){
        final = new ListNode(itr2->val);
        itr2 = itr2->next;
    } else if (itr1 != nullptr && itr2 != nullptr){
        if (itr1->val < itr2->val){
            final = new ListNode(itr1->val);
            itr1 = itr1->next;
        } else {
            final = new ListNode(itr2->val);
            itr2 = itr2->next;
        }
    }
    ListNode *itrFinal = final;

    while (itr1 != nullptr && itr2 != nullptr){
        if (itr1->val < itr2->val){
            itrFinal->next = new ListNode(itr1->val);
            itr1 = itr1->next;
            itrFinal = itrFinal->next;
        } else {
            itrFinal->next = new ListNode(itr2->val);
            itr2 = itr2->next;
            itrFinal = itrFinal->next;
        }
    }

    while (itr1 != nullptr){
        itrFinal->next = new ListNode(itr1->val);
        itr1 = itr1->next;
        itrFinal = itrFinal->next;
    }

    while (itr2 != nullptr){
        itrFinal->next = new ListNode(itr2->val);
        itr2 = itr2->next;
        itrFinal = itrFinal->next;
    }

    return final;
}