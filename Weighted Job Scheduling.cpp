#include<bits/stdc++.h>
using namespace std;

struct Job{
  int start, finish, profit;
};


bool myfunction(Job s1, Job s2){
  return (s1.finish < s2.finish);
};

int binarySearch(Job jobs[], int index)
{
  int l=0, h=index-1;

  while(l<=h){
    int mid = (l+h)/2;
    if(jobs[mid].finish <= jobs[index].start ){
      if(jobs[mid+1].finish <= jobs[index].start ){
        l = mid+1;
      }
      else{
        return mid;
      }
    }
    else{
      h=mid-1;
    }
  }
  return -1;
};

int findMaxProfit(Job arr[],int n){
  sort(arr, arr+n, myfunction);

  int *table = new int[n];
  table[0] = arr[0].profit;

  for(int i=1; i<n; i++){
    int inclProf = arr[i].profit;
    int l = binarySearch(arr, i);
    if(l !=-1){
      inclProf += table[l];
    }
    table[i] =  max(inclProf, table[i-1]);
  }
  int result = table[n-1];
  delete[] table;

  return result; 
}

int main(){
    Job arr[] = {{3, 10, 20}, {1, 2, 50}, {6, 19, 100}, {2, 100, 200}}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout << "Optimal profit is " << findMaxProfit(arr, n); 
    return 0;
}
