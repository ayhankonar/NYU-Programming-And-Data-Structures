int linear_search (int search_value, int lst[], int elements){
  int i = 0, counts = 0;
  while(i < elements){
    counts++;
    if (lst[i]==search_value) break;
    i++;
  }
  return counts;
}