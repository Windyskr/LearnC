#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 10;
int n;
int state[N];  // 0 表示没数字，n 表示有数字
bool used[N];  // false 表示没了，true 表示用过了
void dfs(int u) {
    // 如果过了就输出
    if (u > n) {
        for (int i = 1; i <= n; i++) printf("%d ", state[i]);
        printf("\n");
        return;
    }

    // 看看哪个最小数字可以输出
    for (int i = 1; i <= n; i++) {
        if (used[i] == false) {
            state[u] = i;
            used[i] = true;
            dfs(u + 1);
            // 恢复原状
            state[u] = 0;
            used[i] = false;
        }
    }
}
int main() {
    cin >> n;
    dfs(1);
    return 0;
}