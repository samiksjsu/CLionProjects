#include <iostream>
#include "ListNode.h"
using namespace std;

int main() {

    ListNode *l1 = new ListNode(1);
    ListNode *l2 = new ListNode(2);
/*    ListNode *l3 = new ListNode(3);
    ListNode *l4 = new ListNode(4);
    ListNode *l5 = new ListNode(5);*/

    ListNode *head = l1;
    l1->next = l2; l2->next = nullptr;
/*    l2->next = l3;
    l3->next = l4;
    l4->next = l5;*/
    int n = 1;

    int size = 1;
    ListNode *ptr = head;
    //get the size of the list
    while (ptr->next != nullptr){
        size++;
        ptr = ptr->next;
    }
    int toRemove = size - n + 1;//get the position of the element that needs to be removed.

    ptr = head;



    if (size == 1 && n == 1){
        head = nullptr;
    } else if (size == n){
        head = ptr->next;
    }

    else {
        ptr = head;
        ListNode* prevPtr = head;
        int counter = 1;
        while (counter != toRemove && ptr->next != nullptr){
            prevPtr = ptr;
            ptr = ptr->next;
            counter++;
        }
        if (ptr->next == nullptr){
            prevPtr->next = nullptr;
        } else {
            prevPtr->next = ptr->next;
        }

    }

    //return head;


}