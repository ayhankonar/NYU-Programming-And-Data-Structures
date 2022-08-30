#include<iostream>
#include<string>
using namespace std;

string firstword(string s);

int main() {
  cout << firstword("the quick brown fox");
  return 0;
}

string firstword(string s){
  int findResult = s.find(" ");
  return s.substr(0,findResult);
}
