//
// Created by Samik Biswas on 08-10-2019.
//

#include "deleteNode.h"
void deleteNode(ListNode* node){

    node->val = node->next->val;
    node->next = node->next->next;
}