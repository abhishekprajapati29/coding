#include <bits/stdc++.h>
using namespace std;


int findmindiff(int arr[], int n, int m){
    
        if(m==0 || n==0) return 0;
	    sort(arr, arr+n);
	    if(m>n){
	        return -1;
	    }
	    
	    int min_diff = INT_MAX;
	    
	    for(int i=0; i+m-1<n; i++){
	        int diff = arr[i+m-1] - arr[i];
	        if(min_diff > diff){
	            min_diff =diff; 
	        }
	    }
	    return min_diff;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    cin>>m;
	    int res = findmindiff(arr, n, m);
	    cout<<res<<endl;
	    
	}
	return 0;
}
