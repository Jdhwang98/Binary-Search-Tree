//
// Created by Johnathan Hwang on 10/12/22.
//

#ifndef ANOTHERBST_STACK_H
#define ANOTHERBST_STACK_H
#include "Node.h"
#include "LinkedList.h"
template<class T>
class Stack {
private:
    LinkedList<T> list;

public:
    T& top() const;
    void push(const T& data);
    T pop();
    bool empty() const;
    unsigned getSize() const;
    void print();
};

#include "Stack.cpp"
#endif //ANOTHERBST_STACK_H
