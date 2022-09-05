//
//  ticketsales.h
//  ShowTicket
//
//  Created by Ayhan Konar on 1/21/22.
//

#ifndef ticketsales_h
#define ticketsales_h
#include <iostream>
#include <string>
#include "sportticket.h"

class TicketSales{
public:
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
