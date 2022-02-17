#include <cstdio>
#include <iostream>
using namespace std;

int m, n;
int state[26];  // 1 2 3...表示这个 m 位数字的第一位第二位第三位

void dfs(int u, int lastmax) {
    if (u + n - lastmax < m) return;  // 剪枝

    // 如果过了，就输出这个 m 位数
    if (u > m) {
        for (int i = 1; i <= m; i++) {
            printf("%d ", state[i]);
        }
        // 这个比printf("\n"); 快几毫秒
        puts("");
        return;
    }

    for (int i = lastmax; i <= n; i++) {
        state[u] = i;  // 把第 u 位数设置成 i
        dfs(u + 1, i + 1);
        // 然后还原
        state[u] = 0;
    }
    return;
}

int main() {
    scanf("%d %d", &n, &m);
    dfs(1, 1);
    return 0;
}