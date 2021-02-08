class Solution{
    public:
    string removeConsecutiveCharacter(string s)
    {
        stack<char> str;
        str.push(s[0]);
        for(int i=1; i<s.length(); i++){
            if(!str.empty()){
                if(str.top() != s[i]){
                    str.push(s[i]);
                }
            }
        }
        string res;
        while(!str.empty()){
            res += str.top();
            str.pop();
        }
        reverse(res.begin(), res.end());
        return res;
        
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
}
