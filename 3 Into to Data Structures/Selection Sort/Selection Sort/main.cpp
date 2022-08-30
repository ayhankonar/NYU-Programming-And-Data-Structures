//
//  main.cpp
//  Selection Sort
//
//  Created by Ayhan Konar on 1/16/22.
//

#include <iostream>
using namespace std;

int findIndexOfMin(int arr[], int low, int high);
void selection_sort(int arr[], int arrSize);
void swap_fun(int *xp, int *yp);

int main() {
  int lst[] = {19,2,20,1,0,18};
  selection_sort(lst,(sizeof(lst)/sizeof(lst[0])));
  for (int elem :lst){
    cout << elem;
  }
  cout << endl;
  return 0;
}
