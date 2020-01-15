//
// Created by Samik Biswas on 06-10-2019.
//



#ifndef INC_21__MERGE_TWO_SORTED_LISTS_MERGETWOLISTS_H
#define INC_21__MERGE_TWO_SORTED_LISTS_MERGETWOLISTS_H
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);

#endif //INC_21__MERGE_TWO_SORTED_LISTS_MERGETWOLISTS_H
