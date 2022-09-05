//
//  sportticket.h
//  SportTicket
//
//  Created by Ayhan Konar on 1/12/22.
//

#ifndef sportticket_h
#define sportticket_h

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


class SportTicket: public ShowTicket {
    private:
        bool isBeerSold;
    public:
        SportTicket(string row, string seat);
        bool beer_sold();
        void sell_beer();
        string print_ticket();
};
SportTicket::SportTicket(string row, string seat):ShowTicket(row, seat){
    isBeerSold = false;
}

bool SportTicket::beer_sold(){
    return isBeerSold;
}
void SportTicket::sell_beer(){
    isBeerSold = true;
}

string SportTicket::print_ticket(){
    string beerStatus = "beer", soldStatus = "available";
    if (isBeerSold == true)
        beerStatus = "nobeer";
    if (ShowTicket::isSold == true)
        soldStatus = "sold";
    return ShowTicket::row+" "+ShowTicket::seat+" "+soldStatus+" "+beerStatus;
}




#endif /* sportticket_h */
