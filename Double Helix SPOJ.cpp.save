#include<bits/stdc++.h>
using namespace std;


int solve(int arr1[], int arr2[], int n, int m){
  int res = 0;
  int sum1 = 0, sum2=0;
  int i=0,j=0;
  while(i<n && j<m){
    if(arr1[i] == arr2[j]){
      res += max(sum1, sum2) + arr1[i];
      sum1=sum2=0;
      i++;
      j++;
    }

    else if(arr1[i] < arr2[j]){
      sum1 += arr1[i++];
    }
    else{
      sum2 += arr2[j++];
    }
  }
  while(i<n){
    sum1 += arr1[i++];
  }

  while(j<m){
    sum2 += arr2[j++];
  }
  res += max(sum1, sum2);
  return res;


}



int main(){
  while(true){
    int n;
    cin>>n;
    if(n==0) break;
    else{
      int arr1[n];
      for(int i=0; i<n; i++){
        cin>>arr1[i];
      }
      int m;
      cin>>m;
      int arr2[m];
      for(int i=0; i<m; i++){
        cin>>arr2[i];
      }
      cout<<solve(arr1,arr2, n,m)<<endl;
    }
  }
  return 0;

}
