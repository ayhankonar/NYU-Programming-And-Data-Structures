#include<iostream>
using namespace std;

void printAsc(int start, int end){
  if (start == end){
    cout << start << endl;
  }
  else {
    cout << start << endl;
    printAsc(start+1, end);
  }
}

int main(){
  printAsc(1,4);
  return 0;
}