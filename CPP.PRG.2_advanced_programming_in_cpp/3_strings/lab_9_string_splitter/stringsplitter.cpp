#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {
  string userString, firstHalf, secondHalf;
  int middleIndex;
  char middle;
  cout<<"Enter an odd length string: ";
  getline(cin,userString);

  //Middle char
  middleIndex = floor(userString.length()/2);
  middle = userString[middleIndex];
  firstHalf = userString.substr(0,middleIndex);
  secondHalf = userString.substr(middleIndex+1);

  cout<<"Middle character: "<<middle<<endl;
  cout<<"First half: "<<firstHalf<<endl;
  cout<<"Second half: "<<secondHalf<<endl;

  return 0;
}