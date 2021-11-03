// 3. 输人两个正整数m和n,求其最大公约数和最小公倍数。
#include <stdio.h>
int main() {
    int m, n, tmp, gbs, yu, m1, n1;
    printf("请输入两个正整数:");
    scanf("%d,%d", &m, &n);
    // 存下来，以便求解公倍数用到
    m1 = m;
    n1 = n;
    // 求最大公约数
    // 小的数为被除数,这行可以省略
    // if (m < n) tmp = n, n = m, m = tmp;
    // 辗转相除法
    while (m % n != 0) {
        yu = m % n;
        m = n;
        n = yu;
    }
    printf("最大公约数是:%d\n", n);
    // 求最小公倍数
    gbs = (m1 * n1) / n;
    printf("最小公倍数是%d\n",gbs);
    return 0;
}