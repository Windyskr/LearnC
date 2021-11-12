#include <math.h>
#include <stdio.h>
int main() {
    int i = 0;
    float a, x1 = 1, x2 = 1;
    printf("请输入a:");
    scanf("%f", &a);
    do {
        if (i % 2 == 0) {
            x1 = 0.5 * (x2 + a / x2);
        } else {
            x2 = 0.5 * (x1 + a / x1);
        }
        i++;
    } while (fabs(x1 - x2) > 1e-5);
    // 第一次使用了三元运算符号
    printf("运行了%d次，结果是%f。\n", i, i % 2 == 0 ? x1 : x2);
    return 0;
}