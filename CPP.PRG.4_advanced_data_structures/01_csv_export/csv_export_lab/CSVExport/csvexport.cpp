//
//  csvexport.cpp
//  CSVExport
//
//  Created by Ayhan Konar on 1/31/22.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void csv_export(string data[][10], int records, int columns, string filename){
    ofstream csvFile;
    csvFile.open(filename);
    if (!csvFile) cout << "cannot open" << endl;
        
    for (int i = 0; i < records; i++){
        for (int j = 0; j < columns; j++){
            csvFile << data[i][j];
            if (j < columns-1) csvFile << ",";
        }
        if (i < records-1) csvFile << "\n";
    }
}
