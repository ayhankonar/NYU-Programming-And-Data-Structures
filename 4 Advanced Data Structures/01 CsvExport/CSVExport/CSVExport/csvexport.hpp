//
//  csvexport.hpp
//  CSVExport
//
//  Created by Ayhan Konar on 1/31/22.
//

#ifndef csvexport_hpp
#define csvexport_hpp

#include <stdio.h>
#include <string>
using namespace std;

void csv_export(string data[][10], int records,int columns, string filename);
void csv_import(string data[][10], int columns, int *records, string filename);

#endif /* csvexport_hpp */
