/* 
initializing operator: *
address-of operator: &

  int x = 100;

  int * ptr;    //initializng pointer, pionting to nothing
  ptr = &x;     //address of x
  cout<< *ptr;
*/
#include<iostream>
using namespace std;

int main() {
  int x = 100;

  // DONT DO THIS 
  // int *ptr1; //pointing to "garbage"
  // DO THIS
  int *ptr = 0; // or NULL

  // CREATING A VAR IN HEAP
  int *ptrHeap = new int;
  delete ptrHeap;
  ptrHeap = 0;


  ptr = &x;
  cout << *ptr <<endl;; //100
  cout << ptr <<endl; //1000x7ffee6cfe5d8 (address)

  *ptr = 20;
  cout << *ptr <<endl; //20
  cout << x <<endl; //20

  // ARRAYS
  int x;
  cout << "How big? ";
  cin >> x;
  int * arr = new int[x];
  delete [] arr;
  


  return 0;
}

