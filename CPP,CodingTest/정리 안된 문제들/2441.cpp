#include <bits/stdc++.h>
using namespace std;

int main_2441(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) // 0 1 2 3 4
			cout << ' ';
		for (int j = i; j < n; j++)
			cout << "*";
		cout << '\n';
	}
	return 0;
}