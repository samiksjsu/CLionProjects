//
// Created by Samik Biswas on 08-10-2019.
//

#ifndef INC_83__REMOVE_DUPLICATES_FROM_SORTED_LIST_DELETEDUPLICATES_H
#define INC_83__REMOVE_DUPLICATES_FROM_SORTED_LIST_DELETEDUPLICATES_H

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* deleteDuplicates(ListNode* head);

#endif //INC_83__REMOVE_DUPLICATES_FROM_SORTED_LIST_DELETEDUPLICATES_H
