#include <stdio.h>
#define INF 10000000000
int main() {
    int x, n = 0, s = 0, kase = 0;
    while (scanf("%d", &n) == 1 && n) {
        int s = 0, min = -INF, max = INF;
        for (int i = 0; i < n; i++) {
            scanf("%d", &x);
            s += x;
            if (x < min) min = x;
            if (x > max) max = x;
        }
        // 在 C 语言中，0 为假，所有非 0 都是真，所以所有后面都会输出一行空行
        if (kase) printf("\n");
        printf("Case %d: %d %d %.3f\n", ++kase, min, max, (double)s / n);
    }
    return 0;
}