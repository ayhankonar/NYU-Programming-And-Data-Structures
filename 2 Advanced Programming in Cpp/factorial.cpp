# include<iostream>
using namespace std;

int kCombinations(int n, int k);
int factorial(int num);

int main() {
  int n, k, i, nFact, kFact, n_kFact, k_comb;
  cout<<"Please enter n and k (n>=k):"<<endl;
  cin>>n>>k;

  k_comb = kCombinations(n, k);

  cout<<n<<" choose "<<k<<" is "<<k_comb<<endl;
  
  return 0;

}

int kCombinations(int n, int k){
  int nFact, kFact, n_kFact;
  nFact = factorial(n);
  kFact = factorial(k);
  n_kFact = factorial(n-k);

  return (nFact / (kFact * n_kFact));
}

int factorial(int num) {
  int factRes, i;
  factRes = 1;
  for (i = 1; i<=num; i++){
    factRes *= i;
  }
  return factRes;
}