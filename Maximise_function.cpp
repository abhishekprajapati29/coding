#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, maximum = 0;
	    cin>>n;
	    long long int arr[n];
	    for(int i=0; i<n; i++) cin>>arr[i];
	    long long int max = INT_MIN;
	    long long int min = INT_MAX;
	    for(int i=0; i<n; i++){
	        if(max <  arr[i]){
	            max = arr[i];
	        }
	        if(min > arr[i]){
	            min = arr[i];
	        }
	    }
	    cout<<2*(max-min)<<endl;
	    
	}
	return 0;
}
