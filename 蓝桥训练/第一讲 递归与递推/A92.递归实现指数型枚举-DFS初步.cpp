#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int n;        // n 是数字
int arr[16];  // 表示状态0=未判断 1=选择 2=不选择
void dfs(int u) {
    // 如果递归完了那就全部输出
    if (u > n) {
        for (int i = 1; i <= n; i++) {
            if (arr[i] == 1) {
                printf("%d", i);
                if (i != n) printf(" ");
            }
        }
        printf("\n");

    } else {
        // 如果没有递归完呢

        // 先不选
        arr[u] = 2;
        dfs(u + 1);
        arr[u] = 0;

        // 然后是选
        arr[u] = 1;
        dfs(u + 1);
        arr[u] = 0;
    }
}
int main() {
    cin >> n;
    dfs(1);
    return 0;
}