#include <stdio.h>
// 求公约数，辗转相除法
int gys(int a, int b) {
    int gys;
    while (a % b != 0) {
        gys = a % b;
        a = b;
        b = gys;
    }
    return gys;
}
// 求公倍数
int gbs(int a, int b) {
    int gbs;
    gbs = (a * b) / gys(a, b);
    return gbs;
}
int main() {
    int zs1, zs2;
    printf("请输入两个整数:");
    scanf("%d,%d", &zs1, &zs2);
    printf("最大公约数是=%d，最小公倍数是=%d\n", gys(zs1, zs2), gbs(zs1, zs2));
    return 0;
}