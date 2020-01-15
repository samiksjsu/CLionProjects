#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "linearProbing.h"
#include "chaining.h"

using namespace std;

int main() {

    vector<int> keys = {12, 56, 76, 23, 45, 86, 91, 9, 79};

    hashMap h1;
    vector<list<int>*> v (10, nullptr);

    v.at(4) = new list<int>();

    list<int> itr = *(v.at(4));
    itr.push_front(30);



    cout << itr.front();

}