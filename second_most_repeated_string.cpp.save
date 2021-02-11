#include <iostream>
using namespace std;

char flip(char x){
    return (x == '0') ? '1': '0';
}


int noofflip(string str, char expected){
    int count = 0;
    for(int i=0; i<str.length(); i++){
        if(str[i] != expected){
            count ++;
        }
        expected = flip(expected);
    }
    return count;
}



int main() {
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    
	    int res = min(noofflip(str, '0') , noofflip(str,'1'));
	    cout<<res<<endl;
	    
	}
	return 0;
}
