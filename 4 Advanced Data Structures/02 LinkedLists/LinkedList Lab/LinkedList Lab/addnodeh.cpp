//
//  addnodeh.cpp
//  LinkedList Lab
//
//  Created by Ayhan Konar on 2/9/22.
//

#include <iostream>
#include "cpluspluslabs.h"
#include <string>
using namespace std;

void add_node_head(NODE** data, string firstname,string lastname, string email){
    NODE *temp = new NODE;
    temp->firstname = firstname;
    temp->lastname = lastname;
    temp->email = email;
    temp->next = nullptr;
    
    if (*data == nullptr){
        temp->next = nullptr;
    } else {
        temp->next= *data;
    }
    *data = temp;
}
