//
//  merge_sort.cpp
//  merge
//
//  Created by Ayhan Konar on 1/11/22.
//
#include "cpluspluslabs.h"
using namespace std;

void merge_sort(int arr[], int low, int high){
    int midInd;
    if(low == high)
        return;
    else{
        midInd = (low+high)/2;
        merge_sort(arr, low, midInd); // first half
        merge_sort(arr, midInd+1, high); // second half
        merge(arr, low, midInd, high); // merge halves
  }
}
