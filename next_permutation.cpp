#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        int i,j;
        for(i=N-1; i>=0; i--){
            if(arr[i] > arr[i-1]) break;
        }
        if (i==0){
            swap(arr[i], arr[N-1]); 
            return arr;
        }
        int x = arr[i-1], smallest = i; 
    for (j = i+1; j < N; j++) 
        if (arr[j] > x && arr[j] < arr[smallest]) 
            smallest = j; 
  
    swap(arr[smallest], arr[i-1]); 
   
    sort(arr.begin() + i, arr.end()); 
        return arr;
        
    }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
