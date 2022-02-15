#include <stdio.h>
int main() {
    int x, n = 0, min, max, s = 0;
    while (scanf("%d", &x) == 1) {
        // ctrl/control + D 结束输入
        s += x;
        if (x < min) min = x;
        if (x > max) max = x;
        n++;
    }
    printf("\n%d %d %.3f\n", min, max, (double)s / n);
    return 0;
}