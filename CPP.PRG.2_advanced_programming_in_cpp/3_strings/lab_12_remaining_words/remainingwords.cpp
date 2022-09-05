#include<iostream>
#include<string>
using namespace std;

string remainingwords(string s){
  int findResult = s.find(" ");
  return s.substr(findResult+1);
}
