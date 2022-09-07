#include <iostream>
using namespace std;

/*
PROMPT

Fibonacci number is a series of numbers in which each number is the sum of the two preceding numbers. The first two numbers in the series are the number 1.  Write a program to print first n Fibonacci Numbers

For example, one execution would look like this:
Please enter a positive integer greater than 1: 4
1
1
2

3

File Name 

fibonacci.cpp

Score

There are five tests each worth 2 points

*/

int main(){
	float start = 0, first = 0, second = 1, nFibonacciNumbers, current;

	cout << "Please enter a positive integer greater than 1: ";
	cin >> nFibonacciNumbers;
	
	current = start + first;
	for(int i = 0; i < nFibonacciNumbers; i++){
		
		first = second;
		second = current;
		current = first + second;
		cout << current << endl;
	}

	return 0;
}