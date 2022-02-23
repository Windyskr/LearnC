#include <algorithm>
#include <iostream>
using namespace std;
const int N = 60, MOD = 1000000009;
const int m = 12;
// 价值
int w[N][N];
int f[N][N][13][14];

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) cin >> w[i][j];

    int res = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (w[i][j] > w[i][j]) {
                res++;
            }

    cout << f[n][m] << endl;
    return 0;
}