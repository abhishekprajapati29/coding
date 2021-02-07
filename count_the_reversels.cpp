#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    stack<char> st;
	    unordered_map<char, int> m;
	    if (s.length()%2 != 0){
	        cout<<-1<<endl;
	    }
	    else{
    	    st.push(s[0]);
    	    for(int i=1; s[i]!='\0'; i++){
        	        if((!st.empty() && st.top() == '{') && (s[i] == '}') ){
        	            st.pop();
        	        }
    	        else{
    	        st.push(s[i]);
    	        }
    	    }
    	    int n1=0,n2=0;
    	    while(!st.empty()){
    	        if(st.top() == '{') n1++;
    	       
    	        else n2++;
    	         
    	        st.pop();
    	    }
    	    cout<<(n1+n2)/2 + n2%2<<endl;
    	    
	    }
	}
	return 0;
}
