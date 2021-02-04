#include <bits/stdc++.h>
using namespace std;

void wordwrap(int arr[], int n, int m){
    int i,j,cost;
    int curlen;
    int dp[n], ans[n];
    
    dp[n-1] = 0;
    ans[n-1] = n-1;
    
    for(i=n-2; i>=0; i--){
        curlen = -1;
        dp[i] = INT_MAX;
        
        for(j=i; j<n;j++){
            
            curlen += (arr[j] + 1); // 1 for space between the word
            
            if(curlen > m) break;
            
            if(j == n-1){
                cost = 0;
            }
            else{
                cost = (m-curlen) * (m-curlen) + dp[j+1];
            }
            
            if(cost < dp[i]){
                dp[i] = cost;
                ans[i] = j;
            }
            
        }
        
    }
    i=0;
    while(i<n){
        cout<<i+1<<" "<<ans[i]+1<<" ";
        i = ans[i] + 1;
    }
    cout<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, m;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    cin>>m;
	    wordwrap(arr, n, m);
	}
	return 0;
}