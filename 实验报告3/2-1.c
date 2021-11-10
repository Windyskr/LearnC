#include <stdio.h>
int main() {
    int a;
    // 输入的整数
    int b;
    // 复制
    int c;
    int d = 1;
    int e = 1;
    printf("请输入一个正整数：");
    scanf("%d", &a);
    b = a;
    printf("这个数字逆向输出为：\n");
    while (a != 0) {
        c = a % 10;
        a = a / 10;
        printf("%d ", c);
        d++;
    }
    printf("\n这个数字是%d位数\n", d - 1);
    while (d != 0) {
        e = e * 10;
        d--;
    }
    e /= 100;
    printf("这个数字正向输出等于：");
    while (b != -1) {
        c = b / e;
        b = b % e;
        e = e / 10;
        printf("%d ", c);
    }
    return 0;
}