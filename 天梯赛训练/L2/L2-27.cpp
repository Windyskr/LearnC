// L2-027 名人堂与代金券 (25 分)
#pragma GCC optimize(2)
#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;
typedef pair<int, string> PII;
vector<PII> v;

bool cmp(PII a, PII b) {
    if (a.x == b.x) return a.y < b.y;
    return a.x > b.x;
}

int main() {
    int n, g, k;
    cin >> n >> g >> k;
    for (int i = 0; i < n; i++) {
        string m;
        int s;
        cin >> m >> s;
        v.push_back({s, m});
    }
    sort(v.begin(), v.end(), cmp);
    int cnt = 0;
    for (auto node : v) {
        if (node.x >= g)
            cnt += 50;
        else if (node.x >= 60)
            cnt += 20;
    }
    cout << cnt << endl;
    int idx = 1;
    for (int i = 0; i < k;) {
        // 首先输出他自己
        cout << idx << ' ' << v[i].y << ' ' << v[i].x << endl;
        // 再把它同分的输出
        int j = i + 1;
        while (v[i].x == v[j].x) {
            cout << idx << ' ' << v[j].y << ' ' << v[j].x << endl;
            j++;
        }
        idx += j - i;
        i = j;
    }

    return 0;
}