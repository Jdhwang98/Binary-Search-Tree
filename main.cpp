#include <iostream>
#include "BST.h"
void doubleTree(int& data);
int main() {
    BST<int> tree;
    tree.insert(20);
    tree.insert(10);
    tree.insert(5);
    tree.insert(0);
    tree.insert(25);
    tree.insert(30);
    tree.insert(50);
    tree.preOrder();
    return 0;
}

void doubleTree(int& data){
    data*=2;
}