#include <iostream>
using namespace std;

void permute(string s, int l, int r){
    
    if(l == r) cout<<s<<" ";
    else {
        for(int i=l; i<r; i++){
            swap(s[l], s[i]);
            permute(s, l+1, r);
            swap(s[l], s[i]);
        }
    }
}


int main() {
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    permute(str, 0, str.length());
	    cout<<endl;
	    
	}
	return 0;
}
