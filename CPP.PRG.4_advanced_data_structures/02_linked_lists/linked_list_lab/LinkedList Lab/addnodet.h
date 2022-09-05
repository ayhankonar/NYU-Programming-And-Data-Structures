//
//  addnodet.h
//  LinkedList Lab
//
//  Created by Ayhan Konar on 2/9/22.
//

#ifndef addnodet_h
#define addnodet_h

#include <stdio.h>
#include <string>
#include "cpluspluslabs.h"
using namespace std;

void add_node_tail(NODE** data, string firstname,string lastname, string email);
void add_node_head(NODE** data, string firstname,string lastname, string email);
void csv_import2(NODE** data, string filename);


#endif /* addnodet_h */
