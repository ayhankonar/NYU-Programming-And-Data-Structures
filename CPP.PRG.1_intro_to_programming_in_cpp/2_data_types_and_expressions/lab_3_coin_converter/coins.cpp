#include <iostream>
using namespace std;


/*
PROBLEM STATEMENT

Write a program that asks the user to enter an amount of money in the format of dollars and remaining
cents. The program should calculate and print the minimum number of coins (quarters, dimes, nickels 
and pennies) that are equivalent to the given amount.

Hint: In order to find the minimum number of coins, first find the maximum number of quarters that 
fit in the given amount of money, then find the maximum number of dimes that fit in the remaining 
amount, and so on.

File Name 

coins.cpp

Score

There are five tests each worth 2 points

For example, an execution should look like  this:
Please enter the amount of money to convert:

# of dollars: 2
# of cents: 37
The coins are 9 quarters, 1 dimes, 0 nickels and 2 pennies
*/

int main(){

	int dollars, cents = 0;

	cout<< "Please enter the amount of money to convert:" <<endl;

	cout<< "# of dollars: ";
	cin >> dollars;

	cout<< "# of cents: ";
	cin >> cents;

	//Calculating result:
	int quarterVal = 25;
	int dimeVal = 10;
	int nickelVal = 5;
	int pennyVal = 1;

	int total = dollars*100 + cents;

	//Quarters
	int quarters = total/quarterVal;
	int remainder = total - (quarters* quarterVal);
	
	//Dimes
	int dimes = remainder / dimeVal;
	remainder = remainder - (dimes*dimeVal);

	// Nickels
	int nickels = remainder / nickelVal;
	remainder = remainder - (nickels*nickelVal);

	// Pennies
	int pennies = remainder / pennyVal;

	//Print results
	cout << "The coins are " 
	<< quarters << " quarters, " 
	<< dimes << " dimes, " 
	<< nickels << " nickels and " 
	<< pennies << " pennies"
	<<endl;

	return 0;
}