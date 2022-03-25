#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

const int N = 10010;
int a[N][N];
// 状态转移，左上角，右上角
int f[N][N];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++) scanf("%d", &a[i][j]);

    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= i + 1; j++) f[i][j] = -0x3f3f3f;

    f[1][1] = a[1][1];
    for (int i = 2; i <= n; i++)
        for (int j = 1; j <= i; j++)
            f[i][j] = max(f[i][j - 1] + a[i][j], f[i - 1][j - 1] + a[i][j]);

    int res = -0x3f3f3f;
    for (int i = 1; i <= n; i++) res = max(res, f[n][i]);

    printf("%d", res);

    return 0;
}