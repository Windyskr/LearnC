#include <math.h>
#include <stdio.h>
int main() {
    int k, i;
    double sum;
    printf("请输入k:");
    scanf("%d", &k);
    sum = 0;
    // // 第一个
    for (i = 1; i <= k; i++) {
        sum = sum + i;
    }
    // 第二个
    for (i = 1; i <= k; i++) {
        sum = sum + i * i;
    }
    // 第三个
    for (i = 1; i <= k; i++) {
        sum = sum + 1.0 / i;
    }
    printf("sum = %lf\n", sum);
    return 0;
}