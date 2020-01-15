//
// Created by Samik Biswas on 09-10-2019.
//

#include "hasCycle.h"
#include <unordered_set>
using namespace std;

bool hasCycle(ListNode *head){
    unordered_set<ListNode*> m;

    ListNode *itr = head;

    while (itr != nullptr){
        if (m.find(itr) != m.end()){
            return true;
        } else {
            m.insert(itr);
        }
        itr = itr->next;
    }

    return false;
}