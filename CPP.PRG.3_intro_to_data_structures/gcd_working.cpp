#include<iostream>
using namespace std;

int gcd(int a, int b);

int main(){
  cout << gcd(15,5);
  return 0;
}

int gcd(int a, int b){
  if (b == 0)
    return a;
  else
    return gcd(b,a%b);
}