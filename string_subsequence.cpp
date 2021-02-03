#include<bits/stdc++.h>

using namespace std;

string subsequence(string s, int binary){
	string str = "";
	while(binary > 0){
		int pos = log2(binary&-binary)+1;

		str = s[pos-1]+str;

		binary = (binary & ~(1<<(pos-1)));
	}
	reverse(str.begin(), str.end());
	return str;
}

int main()
{
	string str;
	cin>>str;
	int limit = (1<<str.length()), count = 0;
	for(int i=1; i<limit; i++){
		string s = subsequence(str, i);
		cout<<s<<" ";
	}
	return 0;
}
