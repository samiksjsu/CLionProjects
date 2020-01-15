#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
    LinkedList list1;

    list1.pushBack(10);
    list1.pushBack(30);
    list1.pushBack(34);
    list1.print();

    list1.pushFront(111);
    list1.print();

    list1.addAfter(10, 666);
    list1.print();

    list1.removeElement(666);
    list1.print();
    list1.addAfter(233, 2333);
}