//
// Created by Samik Biswas on 04-10-2019.
//

#ifndef INC_155__MINSTACK_MINSTACK_H
#define INC_155__MINSTACK_MINSTACK_H

#include <vector>
using namespace std;

class MinStack {
public:

    vector<int> *stack;
    int iTop;
    int head;
    int minValue;

    /** initialize your data structure here. */
    MinStack() {
        stack = new vector<int>;
        minValue = 0;
        iTop = 0;
    }

    void push(int x) {
        stack->push_back(x);

        if (iTop == 0){
            minValue = x;
        } else if (x < minValue) {
            minValue = x;
        }
        iTop++;
    }

    void pop() {

        if (iTop != 0){
            stack->pop_back();
            iTop--;

            if (iTop != 0){
                minValue = stack->at(0);
            }

            for(auto i: *stack){
                if (i < minValue){
                    minValue = i;
                }
            }
        } else {
            return;
        }
    }

    int top() {
        if (stack->size() != 0){
            return stack->at(iTop - 1);
        } else {
            return -1;
        }
    }

    int getMin() {
        return minValue;
    }
};


#endif //INC_155__MINSTACK_MINSTACK_H
