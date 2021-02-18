#include<bits/stdc++.h>
using namespace std;

int ispossible(int arr[], int n, int par, int mid){
  int parathas = 0;
  int time = 0;
  for(int i=0; i<n; i++){
    
    time = arr[i];
    int j=2;
    while(time <=mid){
      parathas++;
      time += (arr[i]*j);
      j++;
    }
    if(parathas >= par) return 1;
  }
  return 0;
}

int solve(int arr[], int n, int par){
  int lb = 0;
  int ub = 1e8;
  int res =0;
  while(lb<=ub){
    int mid = (lb+ub)/2;
    if(ispossible(arr, n, par, mid)){
      res = mid;
      ub = mid-1;
    }
    else{
      lb = mid+1;
    }
  }
  return res;
}


int main(){
  int t;
  cin>>t;
  while(t--){
    int par;
    cin>>par;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
      cin>>arr[i];
    }
    cout<<solve(arr, n, par)<<endl;
  }  

}
