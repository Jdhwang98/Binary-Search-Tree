//
// Created by Johnathan Hwang on 10/11/22.
//
#ifndef ANOTHERBST_BST_CPP
#define ANOTHERBST_BST_CPP
#include "BST.h"

template<class T>
void BST<T>::insert(const T &data) {
    insert(root,data);
}

template<class T>
BST<T>::BST(){}

template<class T>
void BST<T>::insert(Node<T> *&node, const T &data) {
    if (node == nullptr) {
        node = new Node<T>;
        node->data = data;
        //std::cout<<"  Node created" << std::endl;

    }
    else {
        if (data > node->data) {

            insert(node->right, data);
            //std::cout << "  Right side";
        }
        else{
            insert(node->left, data);
            //std::cout << "  Left side";
        }
    }
}

template<class T>
void BST<T>::preOrder(Node<T>* node, void f(T&)) {
    if (!node){
        return;
    }
    f(node->data);
    preOrder(node->left,f);
    preOrder(node->right,f);
}
template<class T>
void BST<T>::inOrder(Node<T>* node, void f(T&)) {
    if (node!=nullptr) {
        inOrder(node->left, f);
        f(node->data);
        inOrder(node->right, f);
    }

}
template<class T>
void BST<T>::postOrder(Node<T>* node, void f(T&)) {
    if (!node) {
        return;
    }
    postOrder(node->left,f);
    postOrder(node->right,f);
    f(node->data);
}
template<class T>
void BST<T>::preOrder(void f(T&)){
    preOrder(root,f);
}
template<class T>
void BST<T>::inOrder(void f(T&)){
    inOrder(root, f);
}
template<class T>
void BST<T>::postOrder(void f(T&)){
    postOrder(root,f);
}

template<class T>
BST<T>::BST(const BST<T> &tree) {
    *this = tree;
}

template<class T>
BST<T>::~BST() {

}

template<class T>
void BST<T>::operator=(const BST<T> &tree) {

}

template<class T>
void BST<T>::clear(Node<T>* &node) {
    if (node == nullptr) {
        return;
    }
        clear(node->left);
        clear(node->right);
        delete node;
        node = nullptr;

}

template<class T>
void BST<T>::clear() {
    clear(root);
}

template<class T>
bool BST<T>::empty(Node<T> *node) {
    if (node == nullptr){
        return true;
    }
    else {
        return false;
    }

}

template<class T>
bool BST<T>::empty() {
    return empty(root);
}

template<class T>
void BST<T>::breadthFirst(Node<T> *node, void (*f)(T &)) {
    if (node) {
        return;
    }

//    if (queue.getSize() < 1){
//        f(node->data);
//        queue.push(node->left);
//        queue.push(node->right);
//        breadthFirst(root, f);
//    }
//    else if (queue.getSize() >= 2){
//        //need to create a ranged based for loop based on queue size to know how much to push in the queue and top print
//        f(queue.front(node->data));
//        queue.pop();
//        f(queue.front(node->data));
//        queue.pop()
//    }
//    if (node->left != nullptr && node->right != nullptr) {
//        if (queue.front(!empty())){
//            f(queue.front(node->left->data));
//            f(queue.front(node->right->data));
//            queue.push(queue.front(node->left));
//            queue.push(queue.front(node->right));
//            queue.pop();
//            breadthFirst(root);
//        }
//        else {
//            f(node->data);
//        }
//    }
}

template<class T>
void BST<T>::breadthFirst(void (*f)(T &)) {

}

namespace {
    template<class T>
    void output(T& data){
        std::cout<< (data)<<std::endl;
    }
}
#endif