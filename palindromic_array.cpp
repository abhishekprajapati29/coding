#include<iostream>
#include<string.h>
using namespace std;
int PalinArray(int a[], int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		cout<<PalinArray(a,n)<<endl;
	}
}// } Driver Code Ends




bool ispalindrome(int num){
    string s = to_string(num);
    for(int i=0, j=s.length() -1; i<j; i++, j--){
        if(s[i] != s[j]) return false;
    }
    return true;
}

/*Complete the function below*/
int PalinArray(int a[], int n)
{  
    for(int i=0; i<n; i++){
        if(!ispalindrome(a[i])) return 0;
    }
    return 1;
}
