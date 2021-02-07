#include <bits/stdc++.h>
using namespace std;

int n, dp[1000][1000];
string str = "aabcd";

int countPS(int i, int j)
{

	if (i > j)
		return 0;

	if (dp[i][j] != -1)
		return dp[i][j];

	if (i == j)
		return dp[i][j] = 1;

	else if (str[i] == str[j])
		return dp[i][j]
			= countPS(i + 1, j) + 
				countPS(i, j - 1) + 1;

	else
		return dp[i][j] = countPS(i + 1, j) +
						countPS(i, j - 1) -
						countPS(i + 1, j - 1);
}

int main()
{
	memset(dp, -1, sizeof(dp));
	n = str.size();
	cout << countPS(0, n - 1) << endl;
	return 0;
}
