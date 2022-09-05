//
//  csvimport2.cpp
//  LinkedList Lab
//
//  Created by Ayhan Konar on 2/9/22.
//
#include <iostream>
#include "cpluspluslabs.h"
#include <fstream>
#include <string>
using namespace std;

void csv_import2(NODE** data, string filename){
    
    string firstname,lastname,email;

    ifstream iFile;
    iFile.open(filename);
    if (!iFile) cout << "Not open." << endl;
    while (getline(iFile,firstname,',') && getline(iFile,lastname,',') && getline(iFile,email,'\n')){
        NODE *temp = new NODE;
        temp->firstname = firstname;
        temp->lastname = lastname;
        temp->email = email;
        temp->next = nullptr;
        
        if (*data == nullptr){
            *data = temp;
        } else {
            NODE *endfinder = *data;
            while (endfinder->next != nullptr){
                endfinder = endfinder->next;
            }
            endfinder->next = temp;
        }
    }

}
