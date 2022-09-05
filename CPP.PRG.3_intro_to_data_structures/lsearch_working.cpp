#include<iostream>
using namespace std;

int linear_search (int search_value, int lst[], int elements);

int main() {
  const int size = 6;
  int searchingFor = 20;
  int lst[size] = {19,2,20,1,0,18};
  printf("%i",linear_search(searchingFor,lst,size));
  return 0;
}

int linear_search (int search_value, int lst[], int elements){
  int i = 0, counts = 0;
  while(i < elements){
    counts++;
    if (lst[i]==search_value) break;
    i++;
  }
  return counts;
}