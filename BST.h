//
// Created by Johnathan Hwang on 10/11/22.
//

#ifndef ANOTHERBST_BST_H
#define ANOTHERBST_BST_H
#include "Node.h"
#include <iostream>

namespace {
    template <class T>
    void output(T& data);
}

template <class T>
class BST {
private:
    Node<T>* root = nullptr;
    int _size = 0;
    void insert(Node<T>* &node, const T& data);
    void preOrder(Node<T>* node, void f(T&));
    void inOrder(Node<T>* node, void f(T&));
    void postOrder(Node<T>* node, void f(T&));
    void breathFirst(Node<T>* node, void f(T&) = output);

public:
    BST();
    BST(const BST<T>& tree);
    ~BST();
    void operator =(const BST<T> &tree);
    void insert(const T& data);
    void preOrder(void f(T&) = output);
    void inOrder(void f(T&) = output);
    void postOrder(void f(T&) = output);
    void breathFirst(void f(T&) = output);
    void clear();
    bool empty();
    int size();

};




#include "BST.cpp"
#endif //ANOTHERBST_BST_H
