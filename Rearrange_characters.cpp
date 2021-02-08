#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int flag = 0;
	    unordered_map<char, int> m;
	    for(int i=0; s[i]!='\0'; i++){
	        m[s[i]]++;
	    }
	    for(auto x: m){
	        if(x.second > s.length()/2){
	            flag = 1;
	        }
	    }
	    if(flag == 1){
	        cout<<0<<endl;
	    }else{
	        cout<<1<<endl;
	    }
	    
	    
	}
	return 0;
}
