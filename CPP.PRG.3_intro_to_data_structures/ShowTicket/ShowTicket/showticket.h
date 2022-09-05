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
    private:
        string row;
        string seatNum;
        bool isSold;
    public:
        ShowTicket(string row, string seatNum){
            this -> row = row;
            this -> seatNum = seatNum;
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
    return returnString = row + " " + seatNum + " " + isSoldString;
}


#endif /* showticket_h */
