//
// Created by Johnathan Hwang on 10/11/22.
//

#ifndef ANOTHERBST_NODE_H
#define ANOTHERBST_NODE_H

template<class T>
struct Node {
    Node<T>* next = nullptr;
    Node<T>* prev = nullptr;
    Node<T>* left = nullptr;
    Node<T>* right = nullptr;
    T data;
};
#endif //ANOTHERBST_NODE_H
