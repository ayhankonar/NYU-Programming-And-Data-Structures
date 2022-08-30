int binary_search(int search_value, int lst[], int elements){
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
    else if (search_value<lst[mid])
      high = mid - 1;
    else 
      low = mid + 1;
  }
  return attempts;
}