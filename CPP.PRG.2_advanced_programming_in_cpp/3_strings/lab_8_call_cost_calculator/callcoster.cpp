#include<iostream>
#include<string>
using namespace std;

int main() {
  string dayOfWeek;
  float startTime, duration, ppm, cost;

  cout<<"Enter the day the call started at: ";
  cin>>dayOfWeek;
  cout<<"Enter the time the call started at (hhmm): ";
  cin>>startTime;
  cout<<"Enter the duration of the call (in minutes): ";
  cin>>duration;

  if (dayOfWeek == "Sat" || dayOfWeek == "Sun"){
    ppm = 0.15;
  } else if (startTime > 800 && startTime+duration < 1800){
    ppm = 0.40;
  } else {
    ppm = 0.25;
  }

  cost = duration * ppm;

  printf("This call will cost $%2.2f\n", cost);

  return 0;
}