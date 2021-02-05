#include <bits/stdc++.h>
using namespace std;


class Solution{
public:		

		
	int lps(string s)
	{
	    vector<string> v;
	    int ans = 0;
	    int len = s.length();
	    for(int i=1, j=len-1; i<len; i++, j--){
	        if(s.substr(0,i)  == s.substr(j, len-j)){
	            ans = i;
	        }
	    }
	    return ans;
	}
};


int main() 
{
   

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;

   		Solution ob;

   		cout << ob.lps(str) << "\n";
   	}

    return 0;
} 
