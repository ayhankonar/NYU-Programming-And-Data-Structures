//
//  showtickets.h
//  ShowTicket2
//
//  Created by Ayhan Konar on 1/11/22.
//

#ifndef showtickets_h
#define showtickets_h

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class ShowTickets {
    private:
        string row;
        string seatNum;
        int soldTixCounter;
        bool isSold;
        vector<string> soldTix;
    public:
        ShowTickets(){
            isSold = false;
        }
        bool is_sold(string row, string seat);
        void sell_seat(string row, string seat);
        string print_ticket(string row, string seat);
};

bool ShowTickets::is_sold(string row, string seat){
    for (string tix : soldTix){
        if (tix == row + seat)
            return isSold = true;
    }
    return isSold = false;
}

void ShowTickets::sell_seat(string row, string seat){
    soldTix.push_back(row + seat);
}

string ShowTickets::print_ticket(string row, string seat){
    string status = "available";
    if (is_sold(row, seat) == true)
        status = "sold";
    return row + " " + seat + " " + status;
}


#endif /* showtickets_h */
