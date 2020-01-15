#include <iostream>
using namespace std;

int funct(int a){
    return a;
}

int funct(int a, int b = 0){
    return a * b;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}