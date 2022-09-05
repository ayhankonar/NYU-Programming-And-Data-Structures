#include <iostream>
#include <stdio.h>
using namespace std;

/*
PROMPT

Write a program that inputs two grades separated by a space.  

If both grades are below a score of sixty then the program should output the message:

Student Failed:(

If both grades are greater than or equal to ninety five then the program should output the message:

Student Graduated with Honors:)

Otherwise the program should output the message:

Student Graduated!




For example, an execution could look like this:


Please enter 2 grades, separated by a space: 59 95

Student Graduated!

File Name 

gradeclass.cpp

Score

There are five tests each worth 2 points
*/

int main(){

	double grade1, grade2;

	cout << "Please enter 2 grades, separated by a space: ";
	cin >> grade1;
	cin >> grade2;

	double average = (grade1 + grade2) / 2;

	string status;
	if(average < 60)
		status = "Failed:(";
	else if (average >= 95)
		status = "Graduated with Honors:)";
	else
		status = "Graduated!";

	cout << "Student " << status << endl;

	return 0;
}