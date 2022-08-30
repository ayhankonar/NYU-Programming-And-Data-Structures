#include<iostream>
#include<array>
using namespace std;

void swap(int *xp, int *yp);

int main() {
  int lst[] = {19,2,20,1,0,18};
  swap(&lst[0], &lst[1]);
  for (int elem:lst){
    cout << elem;
  }
  cout<< endl;
  return 0;
}

void swap(int *xp, int *yp){
  int tempX = *xp;
  int tempY = *yp;
  *yp = tempX;
  *xp = tempY;
}
