//
//  showticket.h
//  ShowTicket
//
//  Created by Ayhan Konar on 1/11/22.
//

#ifndef showticket_h
#define showticket_h

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class ShowTicket {
    protected:
        bool isSold;
        string row;
        string seat;
    public:
        ShowTicket(string row, string seat){
            this -> row = row;
            this -> seat = seat;
            isSold = false;
        }
        bool is_sold();
        void sell_seat();
        string print_ticket();
};

bool ShowTicket::is_sold(){
    return isSold;
}
void ShowTicket::sell_seat(){
    isSold = true;
}
string ShowTicket::print_ticket(){
    string returnString, isSoldString = "sold";
    if (isSold == false)
        isSoldString = "available";
    return returnString = row + " " + seat + " " + isSoldString;
}


#endif /* showticket_h */
