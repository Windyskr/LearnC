#include <algorithm>
#include <iostream>
using namespace std;
const int N = 1010;
int n, m;
int v[N], w[N];
int f[N][N];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> v[i] >> w[i];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            if (j >= v[i])
                // 如果放得下v[i]
                // 那就在上一项金额，和选这个的最大金额比较一下（这个很巧妙
                f[i][j] = max(f[i - 1][j], f[i - 1][j - v[i]] + w[i]);
            else
                // 如果放不下这个物品
                f[i][j] = f[i - 1][j];
        }
    cout << f[n][m] << endl;
    return 0;
}