//
//  main.cpp
//  Binary Search Tree
//
//  Created by Ayhan Konar on 2/16/22.
//

#include <iostream>
#include "bst.h"
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    BST node(10);
    node.insert(20);
    node.insert(30);
    node.insert(1);
    node.insert(2);
    cout << "Correct -> 10 ; Actual -> " << node.nth_node(3) << endl;
    
    
    BST mytree(10);
    mytree.insert(5);
    mytree.insert(1);
    mytree.insert(2);
    mytree.insert(12);
    mytree.insert(11);
    cout << "Correct -> 12 ; Actual -> " << mytree.nth_node(6) << endl;
    return 0;
}
