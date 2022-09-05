//
//  main.cpp
//  AVL
//
//  Created by Ayhan Konar on 2/20/22.
//

#include <iostream>
#include "cpluspluslabs.h"
#include "avl.cpp"
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    cout << "Unbalanced Insert" << endl;
    Node *root = insertnb(NULL, 10);
    root = insertnb(root, 20);
    root = insertnb(root, 30);
    cout << "Expected height: 3 ; Actual: " << root->height << endl;
    
    
    cout << "Left rotate test 1" << endl;
    Node *root2 = insertnb(NULL, 10);
    root2 = insertnb(root2, 20);
    root2 = insertnb(root2, 30);
    root2 = left_rotate(root2);
    cout << "Expected 20 ; actual: " << root2->key << endl;

    /*
    cout << "Right rotate test" << endl;
    Node *root2 = insertnb(NULL, 30);
    root2 = insertnb(root2, 20);
    root2 = insertnb(root2, 10);
    root2 = right_rotate(root2);
    cout << root2->key << endl;
     */
    cout << "GetBalance Lab Test" << endl;
    Node *root4 = insertnb(NULL, 30);
    root4 = insertnb(root4, 20);
    root4 = insertnb(root4, 10);
    cout << "Expected balance: 2 ; Actual: " << get_balance(root4) << endl;
    
     cout << "GetBalance Lab Test 3" << endl;
     Node *root5 = insertnb(NULL, 10);
     root5 = insertnb(root5, 20);
     root5 = insertnb(root5, 30);
     cout << "Expected balance: -2 ; Actual: " << get_balance(root5) << endl;
     
    cout << "Insert example" << endl;
    Node *root8 = insert(NULL, 10);
    root8 = insert(root8, 20);
    root8 = insert(root8, 30);
    root8 = insert(root8, 40);
    root8 = insert(root8, 50);
    root8 = insert(root8, 25);

    
     cout << "Insert Lab Test 1" << endl;
     Node *root6 = insert(NULL, 10);
     root6 = insert(root6, 20);
     cout << "Expected balance: -1 ; Actual: " << get_balance(root6) << endl;
    
     cout << "Insert Lab Test 3" << endl;
     Node *root7 = insert(NULL, 10);
     root7 = insert(root7, 1);
     root7 = insert(root7, 2);
    //root7 = insert(root7, 5);//temp
    //root7 = insert(root7, 4);//temp
     //cout << "Expected key: 2 ; Actual: " << root7->key << endl;
    
}
