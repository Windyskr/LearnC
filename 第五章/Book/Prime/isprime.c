// 判断素数
#include <math.h>
#include <stdio.h>
int main() {
    int n, i, flag;
    printf("请输入一个整数：");
    scanf("%d", &n);
    if (n >= 0) {
        for (i = 2, flag = 0; i < sqrt(n); i++) {
            if (n % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            printf("不是素数\n");
        } else {
            printf("是素数\n");
        }
    }
    else {
        printf("输入错误！\n");
    }
    return 0;
}