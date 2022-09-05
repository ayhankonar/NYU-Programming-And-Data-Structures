#include <iostream>
#include <stdio.h>
using namespace std;

/*
PROMPT
Body  mass  index (BMI) is  a number  calculated  from  a person’s weight and height.
According to the Centers for Disease Control and Prevention, the BMI is a fairly
reliable indicator of body fatness for most people. BMI does not measure body fat
directly, but research  has shown that  BMI correlates  to  direct  measures  of  body  fat,  
such  as  underwater  weighing  and dual-energy X-ray absorptiometry. The formula 
for BMI is
    Weight/Height2

Where weight is in kilograms and height is in meters.


Write a program that prompts for weight in pounds and height in inches, 
converts  the values to metric, and then calculates the BMI  with two decimal places.
Note: 1 pound is  0.453592  kilograms and 1 inch is 0.0254  meters.


For example,  an  execution could look  like  this:
Please enter weight in pounds: 135
Please enter height in inches: 71
BMI is: 18.83
*/

int main(){
	float weightLb, heightIn = 0;
	cout << "Please enter weight in pounds: ";
	cin >> weightLb;

	cout << "Please enter height in inches: ";
	cin >> heightIn;

	float weightKg = weightLb * 0.453592;
	float heightM =  heightIn * 0.0254;

	//Calculate BMI (weight(kg) / height(m)^2)
	float bmi = weightKg / (heightM * heightM);

	printf("BMI is: %.2f\n",bmi);

	return 0;
}