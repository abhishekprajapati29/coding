#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n, c;
		cin>>n>>c;
		int arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		sort(arr, arr+n);
		int low=0, high=arr[n-1], mid, best=0;
		while(low <= high){
			mid = low + (high-low)/2;
			int cnt=1, left=0;
			for(int i=1; i<n && cnt<c; i++){
				if(arr[i]-arr[left] >= mid){
					left = i, cnt++;
				}
			}
			if(cnt >=c){
				best = mid;
				low = mid+1;
			}
			else{
				high = mid-1;
			}
		}
		cout<<best<<endl;
	}
	return 0;
}
