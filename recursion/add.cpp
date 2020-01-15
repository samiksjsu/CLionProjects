//
// Created by Samik Biswas on 01-10-2019.
//

#include "add.h"
int add(int num){
    if (num <= 1){
        return num;
    } else {
        return num + add(num - 1);
    }
}