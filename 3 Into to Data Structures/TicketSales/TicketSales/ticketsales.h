//
//  ticketsales.h
//  TicketSales
//
//  Created by Ayhan Konar on 1/12/22.
//

#ifndef ticketsales_h
#define ticketsales_h

#include <iostream>
#include <string>
using namespace std;

class ShowTicket {
    protected:
        bool isSold;
        string row;
        string seat;
    public:
        ShowTicket(){};
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
        SportTicket() {};
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

class TicketSales: public SportTicket {
    public:
        TicketSales(){};
        string print_ticket(ShowTicket *myticket);
        string print_ticket(SportTicket *myticket);
};
string TicketSales::print_ticket(ShowTicket *myticket){
    return myticket -> print_ticket();
}
string TicketSales::print_ticket(SportTicket *myticket){
    return myticket -> print_ticket();
}

#endif /* ticketsales_h */
