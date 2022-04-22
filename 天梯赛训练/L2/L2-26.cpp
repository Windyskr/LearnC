// L2-026 小字辈 (25 分)
#pragma GCC optimize(2)
#include <bits/stdc++.h>
using namespace std;
int n;
int a[100010];
// 辈分
int b[100010];
int minb = -0x3f3f3f3f;
int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    memset(b, -1, sizeof b);
    cin >> n;
    // 其中第 i 个编号对应第 i 位成员的父/母。
    // 家谱中辈分最高的老祖宗对应的父/母编号为 -1。
    for (int i = 0; i < n; i++) cin >> a[i], a[i]--;
    for (int i = 0; i < n; i++) {
        int t = a[i];
        int cnt = 1;
        while (t != -2) {
            // 如果已经有数据了
            if (b[t] != -1) {
                cnt += b[t];
                break;
            }
            // 否则还是要循环
            t = a[t];
            cnt++;
        }
        b[i] = cnt;
        minb = max(minb, cnt);
    }
    // for (int i = 0; i < n; i++) cout << a[i] << ' ';
    // puts("");

    // for (int i = 0; i < n; i++) cout << b[i] << ' ';
    // puts("");
    vector<int> v;
    for (int i = 0; i < n; i++)
        if (b[i] == minb) v.push_back(i);
    cout << minb << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] + 1;
        if (i != v.size() - 1) cout << ' ';
    }

    return 0;
}