#include<iostream>
#include<string.h>

using namespace std;
#define MAX_CHARS 256

bool areIsomorphic(string, string);

int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        cout<<areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}

bool areIsomorphic(string str1, string str2)
{
    int m = str1.length();
    int n = str2.length();
    
    if(m!=n){
        return false;
    }
    
    int map[256];
    memset(map, -1, sizeof(map));
    
    bool marked[256] = {false};
    
    for(int i=0; i<n; i++){
        
        if(map[str1[i]] == -1){
            if(marked[str2[i]] == true){
                return false;
            }
            marked[str2[i]] = true;
            
            map[str1[i]] = str2[i];
        }
        
        else{
            if(map[str1[i]] != str2[i]){
                return false;
            }
        }
        
    }
    return true;
}
