#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string str;
	    cin>>str;
	    
	    int count =0;
	    int p = 0;
	    int sum = 0;
	    vector<int> v;
	    for(int i=0; i< str.length(); i++){
	        if(str[i] == '[') v.push_back(i);
	    }
	    
	    for(int i=0; i<str.length(); i++){
	        if(str[i] == '['){
	            count++;
	            p++;
	        }
	        else{
	            --count;
	        }
	        if(count < 0){
	            sum += v[p] - i;
	            swap(str[v[p]], str[i]);
	            p++;
	            
	            count = 1;
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
