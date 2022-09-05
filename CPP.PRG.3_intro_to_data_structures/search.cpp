#include<iostream>
using namespace std;

int linear_search (int search_value, int lst[], int elements);

int main() {
  const int size = 6;
  int lst[size] = {19,2,20,1,0,18};
  printf("%i",linear_search(20,lst,6));
  return 0;
}

int linear_search (int search_value, int lst[], int elements){
  int i = 0, counts = 0;
  while(i < elements){
    counts++;
    if (lst[i]==search_value)
      return counts;
    i++;
  }
  return -1;
}