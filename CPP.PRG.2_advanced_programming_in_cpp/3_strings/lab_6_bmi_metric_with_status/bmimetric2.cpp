#include<iostream>
#include<string>
using namespace std;

float bmimetricf(int weight, float height); 

int main(){
  int weight; //str
  string status;
  float bmi, height;

  cout<<"Please enter weight in kilograms: "<<endl;
  cin>>weight;

  cout<<"Please enter height in meters: "<<endl;
  cin>>height;

  bmi = bmimetricf(weight, height);
  if (bmi < 18.5) {
    status = "underweight";
  }
  else if (bmi > 18.5 && bmi < 24.9) {
    status = "normal";
  }
  else if (bmi > 25.0 && bmi < 29.9) {
    status = "overweight";
  }
  else if (bmi > 30.0) {
    status = "obese";
  }

  printf("BMI is: %.2f, ",bmi);
  cout<<"status is "<<status<<endl;
  return 0;
}

float bmimetricf(int weight, float height){
  return weight/(height*height);
}