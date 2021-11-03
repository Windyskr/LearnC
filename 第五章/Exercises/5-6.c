#include <stdio.h>
int main() {
    int n, i, t, tmp = 1, sum = 0;
    printf("请输入n=");
    scanf("%d", &n);
    // 特别注意 for 循环条件
    // 表达式一是循环的初始条件
    // 表达式二是循环条件表达式，每次循环先判断，再判断是否执行
    // 表达式三每次执行完，才执行
    for (i = 1; i <= n; i++) {
        for (t = 1,tmp = 1; t <= i; t++) {
            tmp = tmp * t;
        }
        sum = sum + tmp;
        // printf("循环\n");
    }
    printf("sum = %d\n", sum);
    // sum = 1 + 1 x 2 + 1 x 2 x 3  = 9
    // sum = 1 + 1 x 2 + 1 x 2 x 3  + 1 x 2 x 3 x 4 = 33
    return 0;
}