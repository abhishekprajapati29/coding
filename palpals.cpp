#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        unordered_map<char, int> m;
    	for(int i=0; s[i]!='\0'; i++){
    	    m[s[i]]++;
    	}
    	int pairs = 0;
    	int single = 0;
    	for(auto x: m){
    	    int val = x.second;
    	    pairs += (val/2);
    	    single += (val%2);
    	}
    	if(pairs >= single){
    	    cout<<"YES"<<endl;
    	}
    	else{
    	    cout<<"NO"<<endl;
    	}
    }
	return 0;
}
