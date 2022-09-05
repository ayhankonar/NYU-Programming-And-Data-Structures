#include <iostream>
using namespace std;

/*
PROMPT
Write a program that inputs four numbers separated by spaces.  The program should count how many odd and even numbers there are. The program should then output one of three possibilities depending on how many even and odd numbers are entered:

more evens
more odds
same number of evens and odds

For example, an execution could look like this:


Please enter 4 positive integers, separated by a space: 

 2 3 5 7
more odds

File Name 

countoddeven.cpp

Score

There are five tests each worth 2 points
*/

int main(){
	int number = 0, odds = 0, evens = 0;

	cout << "Please enter 4 positive integers, separated by a space:" <<endl;
	for(int i = 0; i < 4; i++){
		cin >> number;
		if(number % 2 == 0)
			evens++;
		else
			odds++;
	}
	
	string resultString;
	if (evens > odds)
		resultString = "more evens";
	else if (odds > evens)
		resultString = "more odds";
	else
		resultString = "same number of evens and odds";

	cout << resultString << endl;

	return 0;
}