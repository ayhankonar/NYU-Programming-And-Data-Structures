//
//  main.cpp
//  CSVExport
//
//  Created by Ayhan Konar on 1/29/22.
//

#include <iostream>
#include <string>
#include "csvexport.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
    // CSV EXPORT LAB
    /*
    string data[10][10] = {
        {"aspen","olmsted","aspen@pleasedonotemail.com"},
        {"sally","jones","sally@gmail.com"},
        {"fred","smith","fsmith@aol.com"}
    };

    csv_export(data,3,3,"/Users/Konar/Documents/5- Programming/NYUx C++ Course/4 Advanced Data Structures/01 CsvExport/CSVExport/CSVExport/customers.csv");
     */
    
    
    // CSV IMPORT LAB
    int records;
    int columns = 3;
    string data[10][10];
    csv_import(data,columns,&records,"/Users/Konar/Documents/5- Programming/NYUx C++ Course/4 Advanced Data Structures/01 CsvExport/CSVExport/CSVExport/customers.csv");
    cout << "records " << records << endl;
    for (int i = 0; i < records; i++){
        for (int j = 0; j < columns; j++){
            cout << data[j][i];
        }
    }
    
    return 0;
}

