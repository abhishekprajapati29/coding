#include <bits/stdc++.h>
using namespace std;
 
long long int divide(long long int dividend,long long int divisor){

  long long int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;

  dividend = abs(dividend);
  divisor = abs(divisor);

  long long temp=0;
  long long quotient = 0;

  for(int i=31; i>=0; i--){
    if(temp + (divisor << i) <= dividend){
      temp += (divisor << i);
      quotient |= 1LL << i;
    }
  }
  return sign*quotient;

}

// Driver code
int main() {
  int a = 10, b = 3;
  cout << divide(a, b) << "\n";
 
  a = 43, b = -8;
  cout << divide(a, b);
 
  return 0;
}
