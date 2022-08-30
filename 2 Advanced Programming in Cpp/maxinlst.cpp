int maxinlst(int lst[], int size){
  int i,j,currentVal,compVal, max;

  i = 0;
  while (i < size){
    currentVal = lst[i];
    for (j= i+1; j<size; j++){
      compVal = lst[j];
      if (j!=size-1 && currentVal > compVal){
        continue;
      } else if (j!=size-1 && currentVal < compVal){
        i = j;
        break;
      } else if (j==size-1 && currentVal < compVal) {
        return max = compVal;
      } else if (j==size-1 && currentVal > compVal) {
        return max = currentVal;
      }
    }
  }
  return max = currentVal;
}