// L2-023 图着色问题 (25 分)
#pragma GCC optimize(2)
#include <bits/stdc++.h>
using namespace std;
int v, e, k;
vector<vector<int>> ve;

bool check(vector<int> &s) {
    for (int i = 1; i <= v; i++) {
        // 找他的所有邻边
        for (int j = 0; j < ve[i].size(); j++) {
            // 如果颜色相同
            if (s[i] == s[ve[i][j]]) return false;
        }
    }
    return true;
}

int main() {
    // 无向图的顶点数 边数 颜色数
    cin >> v >> e >> k;
    ve.resize(v + 1);
    // 每行给出一条边的两个端点的编号
    while (e--) {
        int a, b;
        cin >> a >> b;
        ve[a].push_back(b);
        ve[b].push_back(a);
    }

    int n;
    cin >> n;
    vector<int> s(510);
    while (n--) {
        set<int> c;
        // 读入颜色
        for (int i = 1; i <= v; i++) cin >> s[i], c.insert(s[i]);
        // 判断
        if (c.size() == k && check(s))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}