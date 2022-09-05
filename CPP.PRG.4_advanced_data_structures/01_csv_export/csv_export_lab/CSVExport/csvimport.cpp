//
//  csvimport.cpp
//  CSVExport
//
//  Created by Ayhan Konar on 1/31/22.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void csv_import(string data[][10], int columns, int *records, string filename){
    ifstream iFile;
    string name,lastname,email;
    iFile.open(filename);
    if (!iFile) cout << "Not open." << endl;
    int i = 0;
    while (getline(iFile,name,',') && getline(iFile,lastname,',') && getline(iFile,email,'\n')){
        data[i][0] = name;
        data[i][1] = lastname;
        data[i][2] = email;
        i++;
    }
    *records = i;
}
