#include <iostream>
using namespace std;

/*
PROMPT

Write a program that reads a positive integer n, and prints the first
n even numbers.

For example, one execution would look like this:
Please enter a positive integer: 3
2
4
6

File Name 

evennumbers.cpp

Score

There are three tests each worth 2 points

*/

int main(){
	
	int nEvenNums;

	cout << "Please enter a positive integer: ";
	cin >> nEvenNums;

	for(int i = 1; i <= nEvenNums; i++){
		cout << i*2 << endl;
	}

	return 0;
}