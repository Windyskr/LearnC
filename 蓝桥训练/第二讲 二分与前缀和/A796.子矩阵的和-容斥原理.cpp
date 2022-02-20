#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;
const int N = 1010;
int n, m, q;
int arr[N][N], qzh[N][N];
int x1, y1, x2, y2;

int main() {
    scanf("%d%d%d", &n, &m, &q);
    // for (int a = 0; a < n; a++)
    //     for (int b = 0; b < m; b++)
    // 生成前缀和矩阵,防止越界
    for (int a = 1; a <= n; a++)
        for (int b = 1; b <= m; b++) {
            // if (a == 0)
            //     qzh[0][b] = arr[0][b] + qzh[0][b - 1];
            // else if (b == 0)
            //     qzh[a][0] = arr[a][0] + qzh[a - 1][0];
            // else
            scanf("%d", &arr[a][b]);
            qzh[a][b] =
                qzh[a - 1][b] + qzh[a][b - 1] - qzh[a - 1][b - 1] + arr[a][b];
            // 为什么 0
            // 不会越界，或者需要讨论呢，因为这个矩阵是从1开始的，(0，y)(x,0)都是
            // 0 所以不影响。
        }
    // 判断
    while (q--) {
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        int sum;
        // if (x1 == 1 && y1 == 1) {
        //     sum = qzh[x2 - 1][y2 - 1];
        // } else if (x1 == 1) {
        //     sum = qzh[x2 - 1][y2 - 1] - qzh[x2 - 1][y1 - 1 - 1];
        // } else if (y1 == 1) {
        //     sum = ;
        // } else {
        // 为什么是这样的原因和上面一样
        sum = qzh[x2][y2] - qzh[x2][y1 - 1] - qzh[x1 - 1][y2] +
              qzh[x1 - 1][y1 - 1];
        // }
        printf("%d\n", sum);
    }
    return 0;
}
