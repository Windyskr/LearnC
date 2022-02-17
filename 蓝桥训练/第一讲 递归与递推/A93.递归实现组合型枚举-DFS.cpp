#include <cstdio>
#include <iostream>
using namespace std;

int m, n;
int state[26];  // 1 2 3...表示这个 m 位数字的第一位第二位第三位
int lastmax;    // 之前位数已经用过的数字已经用过的最大数字

void dfs(int u) {
    // 如果过了，就输出这个 m 位数
    if (u > m) {
        for (int i = 1; i <= m; i++) {
            printf("%d ", state[i]);
        }
        printf("\n");
        return;
    }

    for (int i = 1; i <= n; i++) {
        // 如果这个数字没用过，或者比之前位数已经用过的数字还小
        if (i > lastmax) {
            state[u] = i;  // 把第 u 位数设置成 i
            // 把 i 表示为用过
            // 之前位数最大的数字就是 i 了，下一次递归要从 i + 1 开始
            lastmax = i;
            dfs(u + 1);
            // 然后还原
            state[u] = 0;
            lastmax = 0;
            // 这个 lastmax的还原其实有问题
            // 其实没有恢复成上一个 lastmax
            // 因为已经经过了多次 dfs 递归
            // 但是没关系，为啥我也搞不明白
        }
    }
    return;
}

int main() {
    scanf("%d %d", &n, &m);
    dfs(1);
    return 0;
}