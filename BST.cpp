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
        _size++;
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
    clear();
}

template<class T>
void BST<T>::operator=(const BST<T> &tree) {
    copy(tree);
}

template<class T>
void BST<T>::clear(Node<T>* &node) {
    if (node != nullptr) {
        return;
    }
    else {
        clear(node->left);
        clear(node->right);
        delete node;
        node = nullptr;
    }
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
    return root == nullptr;
}

template<class T>
void BST<T>::breadthFirst(Node<T>* &node, void (*f)(T &)) {
    Queue<Node<T>*> queue;
    if (node != nullptr)
        queue.push(node);

    while (!queue.empty()) {
        if(queue.front()->left != nullptr)
            queue.push(queue.front()->left);
        if(queue.front()->right != nullptr)
            queue.push(queue.front()->right);
        f(queue.front()->data);
        queue.pop();
    }

}

template<class T>
void BST<T>::breadthFirst(void (*f)(T &)) {
    breadthFirst(root, f);
}

template<class T>
void BST<T>::copy(BST<T> &tree) const {
    if (this != tree)
        return;
    this -> ~BST();

    Queue<Node<T>*> queue;
    if(tree.root != nullptr) {
        queue.push(tree.root);
    }

    while (!queue.empty()) {
        if(queue.front()->left != nullptr)
            queue.push(queue.front()->left);
        if(queue.front()->right != nullptr)
            queue.push(queue.front()->right);
        insert(queue.front()->data);
        queue.pop();
    }
}

template<class T>
int BST<T>::size() {
    return 0;
}

namespace {
    template<class T>
    void output(T& data){
        std::cout<< (data)<<std::endl;
    }
}
#endif