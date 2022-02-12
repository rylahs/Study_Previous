// 0x0E. 정렬 I
// Written by : Rylah
// Date : 2022.02.12
// 11650. 좌표 정렬하기
// https://www.acmicpc.net/problem/11650
// https://www.acmicpc.net/source/38958022

#include <bits/stdc++.h>
using namespace std;

int n;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({ x, y });
    }

    sort(v.begin(), v.end(), less<>());

    for (auto& e : v)
    {
        cout << e.first << " " << e.second << "\n";
    }


    return 0;
}