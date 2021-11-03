// （4）应用 for 循环语句求和 1!+2!+3!+……+7!
#include <stdio.h>
int main() {
    int n = 7, i, t, tmp = 1;
    // 按照题目要求，使用Long int 存储。
    long sum = 0;
    // 双层循环
    // 外层是计数，第一个是1，第二个是2...
    for (i = 1; i <= n; i++) {
        // 内层计算阶乘，特别注意，tmp的值要重置
        for (t = 1, tmp = 1; t <= i; t++) {
            tmp = tmp * t;
        }
        sum = sum + tmp;
    }
    printf("sum = %ld\n", sum);
    return 0;
}