//
// Created by Samik Biswas on 07-10-2019.
//

#include "plusOne.h"

vector<int> plusOne(vector<int>& digits){

    int size = digits.size();
    int temp = 0;
    int carry = 0;

    for (int i = size - 1; i >= 0; --i) {

        if (i == size - 1){
            temp = digits.at(i) + 1;
            digits.at(i) = carry + (temp % 10);
            carry = temp / 10;
        } else {
            temp = carry + digits.at(i);
            digits.at(i) = (temp % 10);
            carry = temp / 10;
        }

    }
    if (carry != 0){
        digits.push_back(digits.at(size - 1));
        for (int i = size - 1; i >= 0 ; --i) {
            if (i == 0){
                digits.at(i) = carry;
            } else {
                digits.at(i) = digits.at(i - 1);
            }

        }
    }
    return digits;
}