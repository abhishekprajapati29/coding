#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n;i++){
		cin>>arr[i];
	}
	int q;
	cin>>q;
	while(q--){
		int val;
		cin>>val;
		int count = 0;
		int sum = 0;
		for(int i=0; i<n;i++){
			if(arr[i] <= val) {
				count++;
				sum+= arr[i];
			}

		}
		cout<<count<<" "<<sum<<endl;
	}
	return 0;
}
