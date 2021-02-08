#include<bits/stdc++.h>
using namespace std;

string smallestWindow (string S, string P){
    int hash_pat[256] = {0};
    int hash_str[256] = {0};
    int count=0;
    
    if(S.length() < P.length()) return "-1";
    
    for(int i=0; i<P.length(); i++){
        hash_pat[P[i]]++;
    }
    int start_index = -1, len_window = INT_MAX, start=0;
    for(int j=0; j<S.length(); j++){
        hash_str[S[j]]++;
        
        if(hash_str[S[j]] <= hash_pat[S[j]]){
            count++;
        }
        
        if(count == P.length()){
            
            while(hash_str[S[start]] > hash_pat[S[start]] || hash_pat[S[start]] == 0){
                if(hash_str[S[start]] > hash_pat[S[start]]){
                    hash_str[S[start]]--;
                }
                start++;
            }
            
            int len = j-start + 1;
            if(len < len_window){
                len_window = len;
                start_index = start;
            }
        }
        
    }
    
    if(start_index == -1) return "-1";
    
    else{
        return S.substr(start_index, len_window);
    }
}

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        
        cout<<smallestWindow(s, pat)<<endl;
        
    }
	return 0;
} 
