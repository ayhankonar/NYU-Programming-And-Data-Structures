#include<iostream>
using namespace std;

int maxinlst(int lst[], int size);

int main() {
  
  int lst[] = {-19, -3, 20, -1, 5, -25};
  printf("%i",maxinlst(lst,6));
  return 0;
}

int maxinlst(int lst[], int size){
  int i,j,currentMax, max, compVal;
  
  for (i = 0; i < size-1; i++){
    if ((i<size-1) && (lst[i] > lst[i+1])) {
      currentMax = lst[i];
      for (j=i+1; j<size; j++){
        compVal = lst[j];
        if (currentMax > compVal) {
          if (j == size-1) return max = currentMax;
          else continue;
        } else {
          i = j;
          break;
        }
      }
    } else continue;
  }
  return max = currentMax;
}