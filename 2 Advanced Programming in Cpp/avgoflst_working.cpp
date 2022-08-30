#include<iostream>
using namespace std;

float avgoflst(int lst[], int size);

int main() {
int lst[] = {1947, 229, 21, 13, 1, 19, 7};
  printf("%3.0f",avgoflst(lst,7));
  return 0;
}

float avgoflst(int lst[], int size){
  int i,sum;
  float avg;
  for (i = 0; i < size; i++){
    sum += float(lst[i]);
  }
  avg = (float)sum / (float)size;
  return avg;
}