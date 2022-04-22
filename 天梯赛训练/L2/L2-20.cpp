// L2-020 功夫传人 (25 分)
#pragma GCC optimize(2)
#include <bits/stdc++.h>
// #define int long long
using namespace std;
// 存值
vector<vector<int>> v;
// 存放倍数
vector<double> b;

int n;
double z, r;
double sum;
// 目前的查找的位置和他的值
void dfs(int index, double power) {
    if (v[index].size() == 0) {
        sum += power * b[index];
        return;
    }
    for (int i = 0; i < v[index].size(); i++)
        dfs(v[index][i], power * (1 - r / 100));
}
signed main() {
    cin >> n >> z >> r;
    v.resize(n + 1);
    b.resize(n + 1);
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        if (k == 0) {
            // 是得道者
            double bs;
            cin >> bs;
            b[i] = bs;
        } else {
            // 每个都衰减了 r%
            for (int j = 0; j < k; j++) {
                int tmp;
                cin >> tmp;
                v[i].push_back(tmp);
            }
        }
    }
    dfs(0, z);
    cout << (int)sum << endl;
    return 0;
}