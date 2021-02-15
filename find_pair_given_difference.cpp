#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int N, diff;
	    cin>>N>>diff;
	    int arr[N];
	    for(int i=0; i<N; i++){
	        cin>>arr[i];
	    }
	    unordered_map<int, int> m;
	    int flag = 0;
	    for(int i=0; i<N; i++){
	        if(m.find(abs(arr[i]-diff)) != m.end() || m.find(abs(arr[i]+diff)) != m.end() ){
	            flag=1;
	            break;
	        }
	        m[arr[i]] = i;
	        
	    }
	    if(flag == 1) cout<<1<<endl;
	    else cout<<-1<<endl;
	}
	return 0;
}
