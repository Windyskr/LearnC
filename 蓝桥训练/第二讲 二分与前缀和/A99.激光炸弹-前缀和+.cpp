#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

// 凡是前缀和的问题，都从 1 开始，就不用处理边界问题了！
const int N = 5010;
int boom[N][N];
// 目标数量，爆炸半径
int n, r;
int x, y;
// 最大边长
int xm, ym;
int main() {
    scanf("%d%d", &n, &r);
    // r 没必要太大
    r = min(r, 5001);
    // 这里是最后两个测试点没法通过的原因
    xm = ym = r;
    // 输入
    while (n--) {
        // 不同目标可能在同一位置。
        int tmp;
        scanf("%d%d%d", &x, &y, &tmp);
        // 坐标从 1 开始
        x++, y++;
        boom[x][y] += tmp;
        xm = max(x, xm), ym = max(y, ym);
    }
    // 预处理前缀和
    for (int x = 1; x <= xm; x++)
        for (int y = 1; y <= ym; y++)
            boom[x][y] += boom[x - 1][y] + boom[x][y - 1] - boom[x - 1][y - 1];
    int res = 0;

    // 下面开始计算， i j 为右下角
    for (int i = r; i <= xm; i++)
        for (int j = r; j <= ym; j++)
            res = max(res, boom[i][j] - boom[i - r][j] - boom[i][j - r] +
                               boom[i - r][j - r]);
    printf("%d\n", res);
    return 0;
}
