#include <iostream>
#include "deleteDuplicates.h"
using namespace std;

int main() {
    ListNode *l1 = new ListNode(1);
    l1->next = new ListNode(1);
    l1->next->next = new ListNode(1);
    l1->next->next->next = new ListNode(2);
    l1->next->next->next->next = new ListNode(2);

    deleteDuplicates(l1);


}