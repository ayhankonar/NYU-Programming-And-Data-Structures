#include<iostream>
using namespace std;

double* getDoubles(int numDoubles){
  double *array = new double[numDoubles];
  for (int i=0;i<numDoubles;i++){
    array[i] = (i+1.0)/3.0;
    cout<<array[i]<<endl;
  }
  return array;
}

int main(){
  double *ptr = getDoubles(4);
  delete[] ptr;
  return 0;
}