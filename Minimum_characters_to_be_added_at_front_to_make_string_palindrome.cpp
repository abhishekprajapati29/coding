#include <iostream>
using namespace std;

bool ispalindrome(string s){
    for(int i=0, j=s.length()-1; i<j; i++, j--){
        if(s[i] != s[j]){
            return false;
        }
    }
    return true;
}

int main() {
	string s = "ABC";
	int n = s.length();
	int i=0;
	int j=n-1;
	int count = 0;
	int len = s.length();
	for(int j=n; j>=1; j--){
	    if(ispalindrome(s.substr(0,j))){
	        break;
	    }
	    else{
	        count++;
	    }
	}
	cout<<count<<endl;
	return 0;
}
