//
//  main.cpp
//  ShowTicket
//
//  Created by Ayhan Konar on 1/11/22.
//
#include <iostream>
#include <string>
#include "showticket.h"

int main () {
  ShowTicket myticket1("AA","101");
  ShowTicket myticket2("AA","102");
  if(!myticket1.is_sold())
    myticket1.sell_seat ();
  cout << myticket1.print_ticket() << endl;
  cout << myticket2.print_ticket() << endl;
  return 0;
}
