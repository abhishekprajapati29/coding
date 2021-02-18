#include<bits/stdc++.h>
using namespace std;


bool ispossible(int arr[], int n, int m, int cur_min){
  int cur_sum = 0;
  int studentcount = 1;
  for(int i=0; i<n; i++){
    if(arr[i]>cur_min) return false;
    if(cur_sum+arr[i] > cur_min){
      studentcount++;
      cur_sum = arr[i];

      if(studentcount > m){
        return false;
      }
    }
    else{
      cur_sum += arr[i];
    }
  }
  return true;
}


int findpages(int arr[], int n, int m){
  int start = 0;
  int sum = 0;
  for(int i=0; i<n; i++){
    sum += arr[i];
  }
  int end = sum;
  int result = INT_MAX;
  while(start <= end){
    int mid = (start + end)/2;
    if(ispossible(arr, n,m, mid)){
      result = min(result, mid);

      end = mid-1;
    }
    else{
      start = mid+1;
    }
  }
  return result;
}


int main(){
    int arr[] = {12, 34, 67, 90}; 
    int m = 2;
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout <<findpages(arr,n, m);  
    return 0;
}

