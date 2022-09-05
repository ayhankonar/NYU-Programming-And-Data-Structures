#include<iostream>
using namespace std;

// THIS IS BASICALLY AN STL VECTOR
// call by reference arr
void resizeArray(int*& arr, int currentSize, int newSize){
  int *temp = new int[newSize];
  for (int i = 0; i< currentSize; i++){
    temp[i] = arr[i];
  }
  delete[] arr;
  arr = temp;
}

int main(){
  int size = 10;
  int *arr = new int[size];
  for (int i = 0; i<size; i++){
    arr[i] = i * 10;
  }
  int oneMore = 110;
  int newSize = size * 2;
  resizeArray(arr, size, newSize);
  size = newSize;
  arr[size++] = oneMore; //assign new val to now-larger array
  return 0;
}

