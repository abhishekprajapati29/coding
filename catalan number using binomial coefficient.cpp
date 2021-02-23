#include<bits/stdc++.h>
using namespace std;

unsigned long int binomialcoeff(unsigned int n, unsigned int k){
  unsigned long int res = 1;
  if(k> n-k){
    k = n-k;
  }

  for(int i=0; i<k; i++){
    res *= (n-i);
    res/=(i+1);
  }
  return res;
}

unsigned long int catalan(int n){
  unsigned long int c = binomialcoeff(2*n, n);

  return c/(n+1);
}




int main(){
  int n = 5;

  cout<<catalan(n);
  return 0;
}
