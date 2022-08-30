//
//  main.cpp
//  TicketSales
//
//  Created by Ayhan Konar on 1/13/22.
//

#include <iostream>
#include "ticketsales.h"

int main () {
  TicketSales ts;
  ShowTicket myticket1("AA","101");
  SportTicket myticket2("AA","102");
  myticket1.sell_seat();
  myticket2.sell_seat();
  myticket2.sell_beer();
  cout << ts.print_ticket(&myticket1);
  cout << ts.print_ticket(&myticket2);
  return 0;
}
