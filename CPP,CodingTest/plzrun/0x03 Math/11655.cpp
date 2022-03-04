// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.04
// 11655
// https://www.acmicpc.net/problem/11655

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	getline(cin, str);

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ( (str[i] + 13) > 'z')
				str[i] -= 26;
			str[i] += 13;
		}

		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if ((str[i] + 13) > 'Z')
				str[i] -= 26;
			str[i] += 13;
		}

		else
			continue;
	}

	cout << str << "\n";
	return 0;
}