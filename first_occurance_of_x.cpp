#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, x;
	    cin>>n>>x;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    int first = -1, second = -1;
	    for(int i=0, j=n-1; i<=j;){
	        if(arr[i] != x) {
	            i++;
	        }
	        else if(arr[j] != x){
	            j--;
	        }
	        else{
	            first = i;
	            second = j;
	            break;
	        }
	    }
	    if (first == -1 && second == -1){
	        cout<<-1<<endl;
	    }
	    else
	        cout<<first<<" "<<second<<endl;
	}
	return 0;
}
