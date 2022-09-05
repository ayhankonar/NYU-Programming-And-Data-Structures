#include<iostream>
#include<cmath>

bool is_palindrome(int test){
  int places = 0, first = test, factor, last;
  while (first > 9){
    places++;
    first /= 10;
  }
  last = test % 10;
  if (last != first || test < 1){
    return false;
  } else {
    factor = first*pow(10,places);
    is_palindrome((test-factor)/10);
    return true;
  }
}