// plzrun 03. dlfjswjfjs
// Written by : Rylah
// Date : 2022.03.04
// 10430
// https://www.acmicpc.net/problem/10430

#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    cout << (a + b) % c << "\n";
    cout << ((a % c) + (b % c)) % c << "\n";

    cout << (a * b) % c << "\n";
    cout << ((a % c) * (b % c)) % c << "\n";
    return 0;
}