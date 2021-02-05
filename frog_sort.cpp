#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int w[n];
	    for(int i=0; i<n; i++) cin>>w[i];
	    int j[n];
	    for(int i=0; i<n; i++) cin>>j[i];
	    
	    map<int, pair<int,int>> m;
	    for(int i=0; i<n; i++){
	        m[w[i]]={j[i],i};
	    }
	    int ans = 0;
	    int cur;
	    for(auto it=m.begin(); it!=m.end(); it++){
	        if(it==m.begin()){
	            cur=(it->second).second;
	        }
	        else{
	            int index=(it->second).second;
	            while(cur>=index){
	                ans++;
	                index+=((it->second).first);
	            }
	            cur=index;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
