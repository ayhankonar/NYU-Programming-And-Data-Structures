#include<iostream>
using namespace std;

int sortedSearch(int search_value, int lst[], int elements);

int main() {
  int searchVal = 6;
  int lst[] = {0, 1, 2, 18, 19, 20, 25};
  cout << sortedSearch(searchVal,lst,sizeof(lst)/sizeof(lst[0])) << endl;
  return 0;
}

int sortedSearch(int search_value, int lst[], int elements){
  int low = 0, high, mid, i, attempts=0;
  bool found = false;
  high = elements-1;

  while((found == false) && (low <= high)){
    attempts++;
    mid = (low + high)/2;
    if (lst[mid] == search_value) {
      i = mid;
      found = true;
    }
    else if (search_value<lst[mid])//(search_value>lst[low] && search_value<lst[mid])
      high = mid - 1;
    else //if (search_value>lst[mid] && search_value<lst[high])
      low = mid + 1;
  }
  return attempts;
}