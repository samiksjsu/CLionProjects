//
// Created by Samik Biswas on 12-09-2019.
//

#ifndef SORTINGALGORITHMS_BLOCK_H
#define SORTINGALGORITHMS_BLOCK_H
struct block{
    int data;
    block *next = nullptr;
    block *previous = nullptr;

    block(int data = 0);
};

#endif //SORTINGALGORITHMS_BLOCK_H
