#include<iostream>
using namespace std;

int sortedSearch(int srtArr[], int srtArrSize, int val);

int main() {
  const int size = 10;
  int searchVal = 13;
  int srtArr[size] = {1,3,5,7,9,11,13,15,17,19};
  cout << sortedSearch(srtArr,size,searchVal) << endl;
  return 0;
}

int sortedSearch(int srtArr[], int srtArrSize, int val){
  int low = 0, high, mid, i;
  bool found = false;
  high = srtArrSize-1;

  while((found == false) && (low <= high)){
    mid = (low + high)/2;
    if (srtArr[mid] == val) {
      i = mid;
      found = true;
    }
    else if (val<srtArr[mid])//(val>srtArr[low] && val<srtArr[mid])
      high = mid - 1;
    else //if (val>srtArr[mid] && val<srtArr[high])
      low = mid + 1;
  }
  if (found == true)
    return i;
  else
    return -1;
}