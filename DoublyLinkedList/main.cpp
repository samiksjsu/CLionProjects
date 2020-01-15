#include <iostream>
#include "DoublyLinkedList.h"

using namespace std;

int main() {
    DoublyLinkedList list1;

    list1.pushBack(100);
    list1.pushBack(229);
    list1.pushBack(33);
    list1.print();

    list1.pushAfter(100, 46);
    list1.pushAfter(229, 888);
    list1.print();

    list1.pushFront(97);
    list1.pushFront(56);
    list1.print();

    list1.remove(100);
    list1.print();
}
