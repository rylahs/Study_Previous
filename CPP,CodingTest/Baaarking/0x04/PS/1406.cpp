// 0x04. 연결 리스트 
// Written by : Rylah
// Date : 2022.02.02
// 1406. 에디터 
// https://www.acmicpc.net/problem/1406
// https://www.acmicpc.net/source/38442535
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	list<char> L;
	string str;
	cin >> str;
	for (auto& e : str)
		L.push_back(e);

	int m;
	cin >> m;
	auto cursor = L.end();
	while (m--)
	{
		char command;
		cin >> command;
		if (command == 'L')
		{
			if (cursor != L.begin())
				cursor--;
			else
				continue;
		}

		else if (command == 'D')
		{
			if (cursor != L.end())
				cursor++;
			else
				continue;
		}

		else if (command == 'B')
		{
			if (cursor != L.begin())
			{
				cursor--;
				cursor = L.erase(cursor); // �옱吏��젙�븯吏� �븡�쑝硫� 媛�由ы궎�뒗 怨녹씠 �궗�씪�졇�꽌 �윴����엫 �삤瑜�
			}
			else
				continue;
		}

		else if (command == 'P')
		{
			char input;
			cin >> input;
			L.insert(cursor, input);
		}
	}
	for (auto& e : L)
		cout << e;
	return 0;
}
