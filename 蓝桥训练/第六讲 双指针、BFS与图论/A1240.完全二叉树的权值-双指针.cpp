#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

const int N = 1e5 + 10;
int n;
int tr[N];
long long maxn;
int maxs;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &tr[i]);
    // 1 / 2 3 / 4 5 .6 7/ 8 9 .10 11. 12 13. 14 15
    // 深度
    int s = 0;
    int num;
    for (int i = 1; i <= n;)
        for (int j = i; j <= n;) {
            // 当前层的数量
            if (s == 0) {
                num = 1;
            } else {
                num = 2 * num;
            }
            // 计数
            // 可能会爆 int
            long long cnt = 0;
            // 循环加上数字
            // 小心别越界
            while (j - i != num && j <= n) {
                cnt += (long long)tr[j];
                j++;
            }
            // 如果大
            if (s == 0 || cnt > maxn) {
                maxn = cnt;
                maxs = s;
            }
            i = j;
            s++;
        }

    // 输出
    printf("%d", maxs + 1);
    return 0;
}