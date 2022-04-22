// L2-025 分而治之 (25 分)
#pragma GCC optimize(2)
#include <bits/stdc++.h>
using namespace std;
const int N = 10010;
int n, m;
// 邻接表存图
vector<vector<int>> v;
// 存某个节点的度
int degree[N], backup[N];
// 是否已经被攻破
bool b[N];
int c1, c2;
int main() {
    // 城市 道路
    cin >> n >> m;
    v.resize(n + 1);
    while (m--) {
        cin >> c1 >> c2;
        degree[c1]++;
        degree[c2]++;
        v[c1].push_back(c2);
        v[c2].push_back(c1);
    }
    memcpy(backup, degree, sizeof degree);
    int k;
    cin >> k;
    while (k--) {
        memcpy(degree, backup, sizeof degree);
        memset(b, false, sizeof b);
        // 计划攻下的城市号
        int t, ct;
        cin >> t;
        // 对每个号进行处理
        for (int i = 0; i < t; i++) {
            cin >> ct;
            // 已经被攻破了
            b[ct] = true;
            // 和它相临的度 -1
            for (int j = 0; j < v[ct].size(); j++) {
                degree[v[ct][j]]--;
            }
        }

        bool flag = true;
        // 找一下看看
        for (int j = 1; j <= n; j++) {
            // 如果已经被攻破，就跳过
            if (b[j]) continue;
            // 否则就要找
            if (degree[j] > 0) {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}