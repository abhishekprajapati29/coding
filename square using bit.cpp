#include <bits/stdc++.h>
using namespace std;
 
int square(int n){
  if(n == 0)
    return 0;
  
  if(n <0)
    n = -n;
  
  int x = n >> 1;

  if(n & 1){
    return (square(x) << 2) + (x << 2) + 1;
  }
  else{
    return square(x) << 2;
  }

}

// Driver code
int main() {
  for(int i=1; i<5; i++){
    cout<<i<<" "<<square(i)<<endl;
  }
  
}
