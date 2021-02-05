#include <iostream>
using namespace std;

int convert(string str){
    int h1 = (int)str[1] - '0';
    int h2 = (int)str[0] - '0';
    int hh = (h2 * 10 + h1 % 10);
    return hh;
}

string print24(string str)
{
    // Get hours
    int h1 = (int)str[1] - '0';
    int h2 = (int)str[0] - '0';
    int hh = (h2 * 10 + h1 % 10);
    string final = ""; 
 
    // If time is in "AM"
    if (str[5] == 'A')
    {
        if (hh == 12)
        {
            final += "00";
            for (int i=2; i <= 4; i++)
                final += str[i];
        }
        else
        {
            for (int i=0; i <= 4; i++)
                final += str[i];
        }
    }
 
    // If time is in "PM"
    else
    {
        if (hh == 12)
        {
            final += "12";
            for (int i=2; i <= 4; i++)
                final +=str[i];
        }
        else
        {
            hh = hh + 12;
            final += to_string(hh);
            for (int i=2; i <= 4; i++)
                final +=str[i];
        }
    }
    return final;
}

int main() {
	int t,n;
	string p,h,f;
	cin>>t;
	while(t--){
	    cin>>p>>h;
	    f = print24(p+h);
	    int hh = convert(f.substr(0,2));
	    int mm = convert(f.substr(3,2));
	    cin>>n;
	    while(n--){
	        string s1,s2,h1,h2,f1, f2;
	        cin>>s1>>h1>>s2>>h2;
	        f1 = print24(s1+h1);
	        f2 = print24(s2+h2);
	        int f1h = convert(f1.substr(0,2));
	        int f1m = convert(f1.substr(3,2));
	        int f2h = convert(f2.substr(0,2));
	        int f2m = convert(f2.substr(3,2));
	        if( (f1h*100+f1m) <= (hh*100+mm) && (hh*100+mm) <= (f2h*100+f2m) ){
	            cout<<1;
	            continue;
	        }
	        else{
	                cout<<0;
	                continue;
	            }
	    }
	    cout<<endl;   
	}
	
	
	
	return 0;
}
