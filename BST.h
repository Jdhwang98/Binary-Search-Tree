//
// Created by Johnathan Hwang on 10/11/22.
//

#ifndef ANOTHERBST_BST_H
#define ANOTHERBST_BST_H
#include "Node.h"
#include "Queue.h"
#include "Stack.h"
#include <iostream>

namespace {
    template <class T>
    void output(T& data);
}

template <class T>
class BST {
private:
    Node<T>* root = nullptr;
    unsigned _size = 0;
    void insert(Node<T>* &node, const T& data);
    void preOrder(Node<T>* node, void f(T&));
    void inOrder(Node<T>* node, void f(T&));
    void postOrder(Node<T>* node, void f(T&));
    void breadthFirst(Node<T>* &node, void f(T&) = output);
    void clear(Node<T>* &node);
    bool empty(Node<T>* node);

public:
    BST();
    BST(const BST<T>& tree);
    ~BST();
    void operator =(const BST<T> &tree);
    void insert(const T& data);
    void preOrder(void f(T&) = output);
    void inOrder(void f(T&) = output);
    void postOrder(void f(T&) = output);
    void breadthFirst(void f(T &) = output);
    void clear();
    bool empty();
    int size();
    void copy(BST<T> &tree) const;

};




#include "BST.cpp"
#endif //ANOTHERBST_BST_H
