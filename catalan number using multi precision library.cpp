#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
using namespace std;
 
void catalan(int n)
{
    cpp_int cat_ = 1;
 
    cout << cat_ << " ";
 
    for (cpp_int i = 1; i < n; i++) 
    {
        cat_ *= (4 * i - 2);
        cat_ /= (i + 1);
        cout << cat_ << " ";
    }
}
 
int main()
{
    int n = 5;
 
    catalan(n);
    return 0;
}
