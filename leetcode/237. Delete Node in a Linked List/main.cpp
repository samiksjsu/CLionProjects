#include <iostream>
#include "deleteNode.h"
using namespace std;

int main() {
    ListNode *n1 = new ListNode(4);
    n1->next = new ListNode(5);
    n1->next->next = new ListNode(1);
    n1->next->next->next = new ListNode(9);


}