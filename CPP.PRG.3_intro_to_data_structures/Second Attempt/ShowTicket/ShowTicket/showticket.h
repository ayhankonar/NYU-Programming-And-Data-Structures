//
//  showticket.h
//  ShowTicket
//
//  Created by Ayhan Konar on 1/21/22.
//

#ifndef showticket_h
#define showticket_h

#include <iostream>
#include <string>
using namespace std;

class ShowTicket{
protected:
    string row;
    string seat;
public:
    bool IsSold = false;
    ShowTicket(string row, string seat);
    bool is_sold();
    void sell_seat();
    string print_ticket();
};
ShowTicket::ShowTicket(string row, string seat){
    this -> row = row;
    this -> seat = seat;
    //this -> IsSold = false;
}
bool ShowTicket::is_sold(){
    return this -> IsSold;
}
void ShowTicket::sell_seat(){
    this -> IsSold = true;
}
string ShowTicket::print_ticket(){
    string statusString;
    if (this -> IsSold)
        statusString = "sold";
    else
        statusString = "available";
    return this->row + " " + this->seat + " " + statusString;
}

#endif /* showticket_h */
