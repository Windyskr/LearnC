// 判断素数
#include <math.h>
#include <stdio.h>
int main() {
    int n, i, flag = 0;
    printf("请输入一个整数：");
    scanf("%d", &n);
    for (i = 2; i < sqrt(n); i++) {
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
    return 0;
}