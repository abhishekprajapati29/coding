#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        unordered_map<string, int> m;
        for(int i=0; i<n; i++){
            m[arr[i]]++;
        }
        
        int first = INT_MIN, second = INT_MIN;
        for(auto it =  m.begin(); it!=m.end(); it++){
            if(it->second > first){
                second = first;
                first = it->second;
            }
            else if(it->second > second && it->second != first){
                second = it->second;
            }
        }
        for(auto it=m.begin(); it!=m.end(); it++){
            if(it->second == second){
                return it->first;
            }
        }
        
    }
};

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
