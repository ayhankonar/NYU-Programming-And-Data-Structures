#include<iostream>
using namespace std;

void addOne(int *ptrNum){
  *ptrNum += 1;
}

int main() {
  int num = 1;
  int *ptrNum = &num;
  addOne(ptrNum);
  cout<< *ptrNum << endl;
  return 0;
}