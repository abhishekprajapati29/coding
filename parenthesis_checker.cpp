#include<bits/stdc++.h>
using namespace std;

bool ispar(string s)
{
    stack<char> st;
    char x;
    for(int i=0; s[i]!='\0'; i++){
        if(s[i] == '{' || s[i] == '(' || s[i] == '['){
            st.push(s[i]);
            continue;
        }
        
        if(st.empty()){
            return false;
        }
        
        switch(s[i]){
            case '}': 
                x = st.top();
                st.pop();
                if(x == '(' || x == '['){
                    return false;
                }
                break;
            case ')': 
                x = st.top();
                st.pop();
                if(x == '{' || x == '['){
                    return false;
                }
                break;
            case ']': 
                x = st.top();
                st.pop();
                if(x == '(' || x == '{'){
                    return false;
                }
                break;   
        }
    }
    return (st.empty());
}

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       if(ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  
