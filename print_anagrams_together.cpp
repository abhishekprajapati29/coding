#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
vector<vector<string> > Anagrams(vector<string>& string_list) ;

vector<vector<string> > Anagrams(vector<string>& string_list) 
{
    int prime = 101;
    int d = 256;
    unordered_map<string, vector<string>> m;
    for(int i=0; i<string_list.size(); i++){
        string s = string_list[i];
        string temp(s);
        sort(temp.begin(), temp.end());
        m[temp].push_back(s);
    }
    vector<vector<string>> res;
    for(auto x: m){
        res.push_back(x.second);
    }
    return res;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        vector<vector<string> > result = Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
