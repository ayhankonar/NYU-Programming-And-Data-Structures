//
//  addnodet.cpp
//  LinkedList Lab
//
//  Created by Ayhan Konar on 2/9/22.
//
#include <iostream>
#include "cpluspluslabs.h"
#include <string>
using namespace std;

void add_node_tail(NODE** data, string firstname,string lastname, string email){
    NODE *temp = new NODE;
    temp->firstname = firstname;
    temp->lastname = lastname;
    temp->email = email;
    temp->next = nullptr;
    
    if (*data == nullptr){
        *data = temp;
        return;
    } else {
        NODE *endfinder = *data;
        while (endfinder->next != nullptr){
            endfinder = endfinder->next;
        }
        endfinder->next = temp;
    }
}




