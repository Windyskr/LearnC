// （2）输入一个5位以内的正整数，①判断它是一个几位数；②按序输出各位数字；③逆序输出各位数字。
// 如输入56439，输出为：5位数 5, 6, 4, 3, 9, 9, 3, 4, 6, 5
#include <math.h>
#include <stdio.h>
int main() {
    int n, i, tmp[5], x, m;
    printf("请输入一个五位以内的整数:");
    scanf("%d", &n);
    if (n < 100000 && n >= 0) {
        if (n < 10) {
            printf("这是一个一位数\n");
            m = 1;
        } else if (n < 100) {
            printf("这是一个两位数\n");
            m = 2;
        } else if (n < 1000) {
            printf("这是一个三位数\n");
            m = 3;
        } else if (n < 10000) {
            printf("这是一个四位数\n");
            m = 4;
        } else {
            printf("这是一个五位数\n");
            m = 5;
        }
        for (i = 0; i <= m - 1; i++) {
            tmp[i] = n / (int)(pow(10, i)) % 10;
            printf("%d", tmp[i]);
            if (i < m - 1) {
                printf(",");
            }
        }
        printf("\n");
    } else {
        printf("输入错误！\n");
    }
    return 0;
}