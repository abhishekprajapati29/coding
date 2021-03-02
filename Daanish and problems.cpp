#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int arr[10];
	    for(int i=0; i<10; i++){
	        cin>>arr[i];
	    }
	    int k;
	    cin>>k;
	    int i=9;
	    while(k >= arr[i] ){
	        k = k -arr[i];
	        i--;
	    }
	    cout<<i+1<<endl;
	    
	}
	return 0;
}
