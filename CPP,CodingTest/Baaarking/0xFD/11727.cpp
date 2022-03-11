// 0xFD. Practice
// Written by : Rylah
// Date : 2022.02.18
// 11727. 2xn 타일링 2
// 

#include <bits/stdc++.h>
using namespace std;

int dp[1002];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	dp[1] = 1;
	dp[2] = 3;
	for (int i = 3; i <= n; i++)
		dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % 10007;
	
	cout << dp[n] << "\n";

	return 0;
}