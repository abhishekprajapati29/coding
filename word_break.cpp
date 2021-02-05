#include <bits/stdc++.h>
using namespace std;

int wordBreak(string A, vector<string> &B);


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        cout<<wordBreak(line, dict)<<"\n";
    }
}


int wordBreak(string A, vector<string> &B) {
    int dp[A.length()+1] = {0};
    dp[0] = 1;
    for(int len = 1; len<=A.length(); len++){
        for(int i=0; i<len; i++){
            if(dp[i] == 1 && find(B.begin(), B.end(), A.substr(i, len-i)) != B.end()){
                dp[len] = 1; break;
            }
        }
    }
    return dp[A.length()];
}
