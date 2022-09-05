#include<iostream>
#include<cmath>
using namespace std;

bool is_palindrome(int test);

int main() {
  cout << is_palindrome(12321) <<endl;
  return 0;
}

bool is_palindrome(int test){
  if (test/10>1){
    return true;
  }
  int last = test%10;
  int first = test;
  int places = 0;
  while (first > 9){
    places++;
    first /= 10;
  }
  int removeFirst = first*(pow(10,places));
  //cout << last <<endl;
  //cout << first << endl;
  int newTest = (test-removeFirst-last)/10;
  cout<< newTest << endl;
  return is_palindrome(newTest);
}