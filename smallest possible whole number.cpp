#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int N, K;
	    cin>>N>>K;
	    if(K == 0){
	        cout<<N<<endl;
	    }
	    else{
	        cout<<N%K<<endl;
	    }
	}
	return 0;
}
