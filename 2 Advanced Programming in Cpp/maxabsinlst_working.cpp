#include<iostream>
using namespace std;

int maxabsinlst(int lst[], int size);

int main() {
  
  int lst[] = {-19, -3, 20, -1, 5, -25};
  printf("%i",maxabsinlst(lst,6));
  return 0;
}

int maxabsinlst(int lst[], int size){
  int i,j,currentVal,compVal,currentMax, max;
  for (i = 0; i < size; i++){
    if (lst[i] < 0){
      lst[i] = -1*lst[i];
    }
  }

  i = 0;
  while (i < size){
    currentVal = lst[i];
    for (j= i+1; j<size; j++){
      compVal = lst[j];
      if (j!=size-1 && currentVal > compVal){
        continue;
      } else if (j!=size-1 && currentVal < compVal){
        i = j;
        break;
      } else if (j==size-1 && currentVal < compVal) {
        return max = compVal;
      } else if (j==size-1 && currentVal > compVal) {
        return max = currentVal;
      }
    }
  }
  return max = currentVal;
}