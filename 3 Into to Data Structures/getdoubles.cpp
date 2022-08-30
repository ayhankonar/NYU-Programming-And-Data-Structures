double* getDoubles(int numDoubles){
  double *array = new double[numDoubles];
  for (int i=0;i<numDoubles;i++){
    array[i] = (i+1.0)/3.0;
  }
  return array;
}