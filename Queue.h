//
// Created by Johnathan Hwang on 10/12/22.
//

#ifndef ANOTHERBST_QUEUE_H
#define ANOTHERBST_QUEUE_H
#include "LinkedList.h"

template<class T>
class Queue {
private:
    LinkedList<T> list;
public:
    T& front() const;
    void pop();
    void push (const T& item);
    bool empty() const;
    int getSize() const;
    void print();
};

#include "Queue.cpp"
#endif //ANOTHERBST_QUEUE_H
