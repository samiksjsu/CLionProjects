#include <iostream>
using namespace std;

int myFunct(int a1) {
    return a1;
}

int myFunct(int a1, int a2=0){
    return a1 * a2;
}

int main() {
    myFunct(20);
}