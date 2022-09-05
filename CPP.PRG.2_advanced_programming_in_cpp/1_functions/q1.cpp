#include <iostream>
#include <cmath>
using namespace std;

float demo(float a);
int demo(int a);

int main () {
  double a = 50.0;
  cout<<demo(a);
}

float demo(float a) {
   cout<<"float"<<endl;
   return 50+1;
}

int demo(int a) {
   cout<<"int"<<endl;
   return 50-1;
}