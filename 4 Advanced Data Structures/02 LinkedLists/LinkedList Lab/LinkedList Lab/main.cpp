//
//  main.cpp
//  LinkedList Lab
//
//  Created by Ayhan Konar on 2/7/22.
//

#include <iostream>
#include <string>
#include "cpluspluslabs.h"
#include "addnodet.h"
using namespace std;

int main() {
    NODE* data = nullptr;
    /* LINKEDLIST 2
    add_node_head(&data,"aspen","olmsted","aspeno@aol.com");
    cout << data->firstname << data->lastname << data->email << endl;
    add_node_head(&data,"sally","jones","sjones@aol.com");
     */
    csv_import2(&data,"/Users/Konar/Documents/5- Programming/NYUx C++ Course/4 Advanced Data Structures/02 LinkedLists/LinkedList Lab/LinkedList Lab/customers.csv");
    return 0;
}
