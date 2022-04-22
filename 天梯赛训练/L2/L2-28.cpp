// L2-028 秀恩爱分得快 (25 分)
#pragma GCC optimize(2)
#include <bits/stdc++.h>
using namespace std;
int a[510];
vector<vector<double>> ma, fm;
// 如果一张照片上出现了 K 个人
// 这些人两两间的亲密度就被定义为 1/K。
int n, m;
int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int k, t;
        // 出现的人数
        cin >> k;
        memset(a, 0, sizeof a);
        for (int j = 0; j < k; j++) cin >> a[j];
        // 增加亲密度
    }
    return 0;
}