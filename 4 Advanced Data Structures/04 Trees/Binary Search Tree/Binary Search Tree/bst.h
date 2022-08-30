//
//  bst.h
//  Binary Search Tree
//
//  Created by Ayhan Konar on 2/16/22.
//

#ifndef bst_h
#define bst_h
#include <iostream>
#include <string>
using namespace std;

class BST
{
public:
    int data;
    BST *left, *right;
    BST();
    BST(int);
    void insert(int);
    int nth_node(int n);
};
BST::BST() : data(0), left(nullptr), right(nullptr){};

BST::BST(int x) : data(x),left(nullptr),right(nullptr){};

void BST::insert(int x){
    BST *temp = new BST(x);
    
    if (x < data && left == NULL)
        left = temp;
    else if (x > data && right == NULL)
        right = temp;
    else if (x < data && left != NULL)
        left->insert(x);
    else if (x > data && right != NULL)
        right->insert(x);
    else return;
}

int BST::nth_node(int n){
    static int count = 0;
    
    if (left != NULL){
        left->nth_node(n);
    }
    count++;
    if (count == n) return data;
    if (right != NULL){
        return right->nth_node(n);
    }
    return data;
}


#endif /* bst_h */
