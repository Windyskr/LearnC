// （2）输入一个5位以内的正整数，①判断它是一个几位数；②按序输出各位数字；③逆序输出各位数字。
// 如输入56439，输出为：5位数 5, 6, 4, 3, 9, 9, 3, 4, 6, 5
#include <math.h>
#include <stdio.h>
int main() {
    int n, i, tmp[5], x, m = 0;
    printf("请输入一个五位以内的整数:");
    scanf("%d", &n);
    if (n < 100000 && n >= 0) {
        x = n;
        while (x != 0) {
            x = x / 10;
            m++;
        }
        printf("这是一个%d位数\n", m);
        for (i = 0; i <= m - 1; i++) {
            tmp[i] = n / (int)(pow(10, i)) % 10;
            printf("%d", tmp[i]);
            if (i < m - 1) {
                printf(",");
            }
        }
        printf("\n");
        for (i = m-1; i >= 0; i--) {
            printf("%d", tmp[i]);
            if (i != 0) {
                printf(",");
            }
        }
        printf ("\n");
    } else {
        printf("输入错误！\n");
    }
    return 0;
}