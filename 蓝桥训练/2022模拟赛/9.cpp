// 给定正整数 a, b, c，请问有多少个正整数，是其中至少两个数的约数。
#include <algorithm>
#include <cstring>
#include <iostream>
#include <map>
using namespace std;
map<int, int> m;
int cnt;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    for (int i = 1; i <= a; i++)
        if (a % i == 0) m[i]++;

    for (int i = 1; i <= b; i++)
        if (b % i == 0) m[i]++;

    for (int i = 1; i <= b; i++)
        if (c % i == 0) m[i]++;

    for (auto it = m.begin(); it != m.end(); it++)
        if (it->second >= 2) cnt++;

    cout << cnt << endl;

    return 0;
}