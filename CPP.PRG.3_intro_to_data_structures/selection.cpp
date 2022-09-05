#include "cpluspluslabs.h"

int findIndexOfMin(int arr[], int low, int high);

void selection_sort(int arr[], int arrSize){
  int iNewMin;
  for (int iCurrent = 0; iCurrent < arrSize; iCurrent++){
    iNewMin = findIndexOfMin(arr, iCurrent, arrSize-1);
    swap(&arr[iCurrent], &arr[iNewMin]);
  }
}

int findIndexOfMin(int arr[], int low, int high){
  int min, minInd;
  min = arr[low];
  minInd = low;
  for (int i = low+1; i<=high;i++){
    if (arr[i] < min){
      min = arr[i];
      minInd = i;
    }
  }
  return minInd;
}
