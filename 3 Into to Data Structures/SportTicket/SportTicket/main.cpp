//
//  main.cpp
//  SportTicket
//
//  Created by Ayhan Konar on 1/12/22.
//

#include <iostream>
#include <string>
#include "sportticket.h"

int main () {
  SportTicket myticket1("AA","101");
  SportTicket myticket2("AA","102");
  myticket1.sell_seat();
  myticket2.sell_seat();
  myticket2.sell_beer();
  cout << myticket1.print_ticket() << endl;
  cout << myticket2.print_ticket() << endl;
  return 0;
}
