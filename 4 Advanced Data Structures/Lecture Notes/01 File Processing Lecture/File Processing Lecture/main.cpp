//
//  main.cpp
//  File Processing Lecture
//
//  Created by Ayhan Konar on 1/17/22.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void openInputFile(ifstream &inFile){ // passing *streams* must always be by reference
    // Importing file from user input
    string fileName;
    cout << "Enter file address" << endl;
    getline(cin,fileName);
    
    inFile.open(fileName);
    while (!inFile){
        cout << "FILE FAILED TO OPEN" << endl;
        cout << "Enter file name again" << endl;
        getline(cin, fileName);
        inFile.clear(); // <----- MUST CLEAR TO TRY AGAIN
        inFile.open(fileName);
    }
}
int average(vector<int> nums){
    int sum = 0;
    for (int x : nums){
        sum += x;
    }
    return sum / nums.size();
}

int main() {
    
    /*
    // Creating file
    ofstream outfile("/Users/Konar/Documents/5- Programming/NYUx C++ Course/4 Advanced Data Structures/Lecture Notes/File Processing Lecture/input.txt");
    outfile << "100\n90\n80\n70\n60\n50\n40\n30\n20\n10" << endl;
    */
    
    // Importing file
    ifstream inFile;
    openInputFile(inFile);
    vector<int> v;
    int tempVar;
    while (inFile >> tempVar){ //">>" READS INTO "TEMPORARY" var
        v.push_back(tempVar);
    }
    cout << "The average of the integers in the file is " << average(v) << endl;

    
    return 0;
}
