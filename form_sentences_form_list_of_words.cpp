#include <bits/stdc++.h>
using namespace std;

#define R 4
#define C 4


void printUtils(string arr[R][C], int m, int n, string Output[R]){
  Output[m] = arr[m][n];
  if(m == R-1){
    for(int i=0; i<R; i++){
      cout<<Output[i]<<" ";
    }
    cout<<endl;
    return;
  }

  for(int i=0; i<C; i++){
    if(arr[m+1][i] != ""){
      printUtils(arr, m+1, i, Output);
    }
  }
}



void print(string arr[R][C]){
  string output[R];

  for(int i=0; i<C; i++){
    if(arr[0][i] != ""){
      printUtils(arr, 0, i, output);
    }
  }
}
 


int main()
{
string arr[R][C] = {{"you", "we"},
						{"have", "are"},
						{"sleep", "eat", "drink"},{"sleep", "eat", "drink"}};

print(arr);

return 0;
}
