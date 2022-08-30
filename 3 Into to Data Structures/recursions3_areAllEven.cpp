#include<iostream>
using namespace std;

bool areAllEven(int arr[], int n);

int main() {
  int arr[4] = {2, 23, 26, 14};
  if (areAllEven(arr,4)== true){
    cout<<"All are even"<<endl;
  }
  else{
    cout<<"Not all are even"<<endl;
  }
  return 0;
}

bool areAllEven(int arr[], int n){
  bool res;

  if (n == 1){
    return (arr[0]%2 == 0); //returns true/false
  }
  else {
    res = areAllEven(arr, n-1);
    if (res == true){
      return (arr[n-1]%2 == 0);
    }
    else {
      return false;
    }
  }
}