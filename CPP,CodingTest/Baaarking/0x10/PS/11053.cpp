// 0x10. 다이나믹 프로그래밍
// Written by : Rylah
// Date : 2022.02.13
// 11053. 가장 긴 증가하는 부분 수열
// https://www.acmicpc.net/problem/11053
// https://www.acmicpc.net/source/38986623

#include <bits/stdc++.h>
using namespace std;

int arr[1003];
int dp[1003];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	fill(dp, dp + n, 1);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] < arr[i])
				dp[i] = max(dp[i], dp[j] + 1);
		}
	}

	cout << *max_element(dp, dp + n) << "\n";
	return 0;
}
