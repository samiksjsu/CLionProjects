#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {

    string num1 = "999";
    string num2 = "88";

    vector<int> indv;

    int ptr1 = num1.length() - 1;
    int ptr2 = num2.length() - 1;
    int digit1 = 0;
    int digit2 = 0;
    int indvMulFactor = 1;

    while(ptr1 >= 0) {

        digit1 = num1[ptr1] - '0';
        int carry = 0;
        int mulFactor = 1;
        int tempResult = 0;
        ptr2 = num2.length() - 1;
        while(ptr2 >= 0) {
            digit2 = num2[ptr2] - '0';

            int mul = carry + (digit1 * digit2);

            carry = mul / 10;
            tempResult += mulFactor * (mul % 10);
            mulFactor *= 10;
            ptr2--;
        }

        if (carry != 0) {
            tempResult += mulFactor * carry;
        }
        indv.push_back(indvMulFactor * tempResult);
        indvMulFactor *= 10;
        ptr1--;
    }



    cout << "Hello" << endl;

}
