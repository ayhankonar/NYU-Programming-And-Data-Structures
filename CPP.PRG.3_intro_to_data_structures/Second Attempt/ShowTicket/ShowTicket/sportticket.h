//
//  sportticket.h
//  ShowTicket
//
//  Created by Ayhan Konar on 1/21/22.
//

#ifndef sportticket_h
#define sportticket_h

#include <iostream>
#include <string>
#include "showticket.h"

class SportTicket: public ShowTicket{
public:
    bool IsBeerSold = false;
    SportTicket(string row, string seat)
    :ShowTicket(row, seat){
        this -> row = row;
        this -> seat = seat;
    }
    bool beer_sold();
    void sell_beer();
    string print_ticket();
};
bool SportTicket::beer_sold(){
    return IsBeerSold;
}
void SportTicket::sell_beer(){
    IsBeerSold = true;
}
string SportTicket::print_ticket(){
    string beerSoldString;
    if (IsBeerSold)
        beerSoldString = "beer";
    else
        beerSoldString = "nobeer";
    return ShowTicket::print_ticket() + " " + beerSoldString;
}

#endif /* sportticket_h */
