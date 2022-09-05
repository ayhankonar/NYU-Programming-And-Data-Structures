float avgoflst(int lst[], int size){
  int i;
  float sum, avg;
  for (i = 0; i < size; i++){
    sum += float(lst[i]);
  }
  avg = sum / (float)size;
  return avg;
}