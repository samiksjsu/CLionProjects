//
// Created by Samik Biswas on 06-10-2019.
//

#include "addTwoNumbers.h"
#include <iostream>
#include <vector>

using namespace std;

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {

    int carry = 0;
    int tempNum = 0;
    ListNode *result = nullptr;

    tempNum = carry + l1->val + l2->val;
    if (tempNum >= 10) {
        carry = tempNum / 10;
        tempNum = tempNum % 10;
    }
    l1 = l1->next;
    l2 = l2->next;
    result = new ListNode(tempNum);
    ListNode *itrResult = result;

    while (l1 != nullptr || l2 != nullptr) {
        if (l1 != nullptr && l2 != nullptr) {
            tempNum = carry + l1->val + l2->val;
            carry = 0;
            if (tempNum >= 10) {
                carry = tempNum / 10;
                tempNum = tempNum % 10;
            }
            l1 = l1->next;
            l2 = l2->next;

            itrResult->next = new ListNode(tempNum);
            itrResult = itrResult->next;
        } else if (l1 != nullptr) {
            tempNum = carry + l1->val;
            carry = 0;
            if (tempNum >= 10) {
                carry = tempNum / 10;
                tempNum = tempNum % 10;
            }
            itrResult->next = new ListNode(tempNum);
            itrResult = itrResult->next;
            l1 = l1->next;
        } else {
            tempNum = carry + l2->val;
            carry = 0;
            if (tempNum >= 10) {
                carry = tempNum / 10;
                tempNum = tempNum % 10;
            }
            itrResult->next = new ListNode(tempNum);
            itrResult = itrResult->next;
            l2 = l2->next;
        }
    }

    if (carry != 0) {
        itrResult->next = new ListNode(carry);
    }

    return result;

}