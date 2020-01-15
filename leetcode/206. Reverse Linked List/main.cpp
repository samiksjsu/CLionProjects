#include <iostream>
#include "reverseList.h"

int main() {
    ListNode *l1 = new ListNode(10);
    l1->next = new ListNode(20);
    l1->next->next = new ListNode(30);
    l1->next->next->next = new ListNode(40);

    reverseList(l1);

}