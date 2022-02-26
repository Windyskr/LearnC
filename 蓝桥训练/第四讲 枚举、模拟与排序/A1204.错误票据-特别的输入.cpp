#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

// 这个值要记得
const int INF = 0x3f3f3f3f;
const int N = 1e5 + 10;
// 这个别弄错了！
int maxid = -INF, minid = INF;
int id[N];

int main() {
    int t;
    cin >> t;

    int c;
    while (cin >> c) {
        maxid = max(maxid, c);
        minid = min(minid, c);
        id[c]++;
    }

    int m, n;
    for (int i = minid; i <= maxid; i++) {
        // 找重复的
        if (id[i] == 0) m = i;
        // 找缺少的
        if (id[i] == 2) n = i;
    }

    cout << m << " " << n << endl;
    return 0;
}