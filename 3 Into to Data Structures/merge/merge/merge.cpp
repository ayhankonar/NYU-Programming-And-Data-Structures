//
//  merge.cpp
//  merge
//
//  Created by Ayhan Konar on 1/11/22.
//
#include<iostream>
using namespace std;

void merge(int originalArr[], int left, int middle, int right){
  int lowRight, size;
  int *mergedArr;
  int iRight, iLeft, iRes;
  int i, iArr;

  lowRight = middle + 1;
  size = right - left + 1;
  mergedArr = new int[size];

  iLeft = left;
  iRight = lowRight;
  iRes = 0; // result

  while(iLeft <= middle && iRight <= right){
    if (originalArr[iLeft]< originalArr[iRight]){
      mergedArr[iRes] = originalArr[iLeft];
      iLeft++;
      iRes++;
    }else{
      mergedArr[iRes] = originalArr[iRight];
      iRight++;
      iRes++;
    }
  }
  while(iLeft <= middle){
    mergedArr[iRes] = originalArr[iLeft];
    iLeft++;
    iRes++;
  }
  while(iRight <= right){
    mergedArr[iRes] = originalArr[iRight];
    iRight++;
    iRes++;
  }

  for(i = 0, iArr = left; i < size; i++, iArr++)
    originalArr[iArr] = mergedArr[i];

  delete []mergedArr;
}


