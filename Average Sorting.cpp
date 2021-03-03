#include <iostream>
using namespace std;

int fn(int a[], int n){
    for(int i=0; i<n-1; i++){
        if(a[i]<a[i+1]) return 1;
    }
    return 0;
}

int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        if(fn(a,n)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}
