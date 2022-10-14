#include <iostream>
#include "BST.h"
void doubleTree(int& data);
int main() {
    BST<int> tree;
    Queue<int> queue;
    std::cout<<"In order output: "<<std::endl;
    tree.insert(20);
    tree.insert(10);
    tree.insert(5);
    tree.insert(0);
    tree.insert(25);
    tree.insert(30);
    tree.insert(50);
    tree.inOrder();
//    tree.clear();
//    std::cout<<"output after clear"<<std::endl;
//    tree.insert(69);
//    tree.insert(4);
//    tree.insert(20);
//    tree.insert(100);
//    tree.inOrder();
//    tree.clear();
//    std::cout << "bool: ";
//    std::cout<< tree.empty();

//    for(int i = 0; i < 10; i++){
//        queue.push(i);
//    }
//    queue.print();

    return 0;
}

void doubleTree(int& data){
    data*=2;
}