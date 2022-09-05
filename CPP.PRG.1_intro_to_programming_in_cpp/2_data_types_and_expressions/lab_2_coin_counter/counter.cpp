#include <iostream>
using namespace std;

int main(){
	cout<<"Please enter the number of coins:"<<endl;

	int quarters,dimes,nickels,pennies = 0;
	cout<<"# of quarters: ";
	cin>>quarters;

	cout<<"# of dimes: ";
	cin>>dimes;

	cout<<"# of nickels: ";
	cin>>nickels;

	cout<<"# of pennies: ";
	cin>>pennies;

	//Calculate total
	int totalInCents = quarters*25 + dimes*10 + nickels*5 + pennies;
	int totalDollars = totalInCents/100;
	int totalCents = totalInCents % 100;

	cout<<"The total is " << totalDollars << " dollars and " << totalCents << " cents" <<endl;

	return 0;
}