#include <iostream>
#include <string>
#include "addTwoNumbers.h"
using namespace std;

int main() {

    ListNode *l1 = new ListNode(1);//243
/*    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);
    l1->next->next->next = new ListNode(1);*/

    ListNode *l2 = new ListNode(9);//243
    l2->next = new ListNode(9);
/*    l2->next->next = new ListNode(8);*/

/*    ListNode *l1 = new ListNode(0);
    ListNode *l2 = new ListNode(0);*/

    addTwoNumbers(l1, l2);

}