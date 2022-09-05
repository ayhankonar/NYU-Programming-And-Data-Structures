#include <iostream>
#include <stdio.h>
using namespace std;

/*
PROMPT
Body mass index (BMI) is a number calculated from  a person’s weight and height.
According to the Centers for Disease Control and Prevention, the BMI is a fairly
reliable indicator of body fatness for most people. BMI does not measure body fat
directly, but research has shown that  BMI correlates to direct  measures  of  body  fat,  
such  as  underwater  weighing  and dual-energy X-ray absorptiometry. The formula 
for BMI is
    Weight/Height2

Where weight is in kilograms and height is in meters.


Write a program that prompts for metric weight and height and outputs the BMI with two decimal places.


For example,  an  execution could look  like  this:
Please enter weight in kilograms: 50
Please enter height in meters: 1.58
BMI is: 20.03

File Name 

bmimetric.cpp

Score

There are five tests each worth 2 points
*/


int main(){
	float weightKg, heightM = 0;
	cout << "Please enter weight in kilograms: ";
	cin >> weightKg;

	cout << "Please enter height in meters: ";
	cin >> heightM;

	//Calculate BMI (weight(kg) / height(m)^2)
	float bmi = weightKg / (heightM * heightM);

	printf("BMI is: %.2f\n",bmi);

	return 0;
}