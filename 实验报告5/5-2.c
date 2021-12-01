/* (2）设有5 行5 列的数组b，其元素b[i][j]=3*i+2*j-8（i、j = 0，1，2，3，4）。
编程序，实现：
①求第4 行的 5 个元素之累加和。
②求第5 列的5个元素之平均值。
③求主对角线（“\”状对角线）以及反斜对角线（“/”状对角线）上各有多少个负数；*/
#include <stdio.h>
int main() {
    int b[5][5];
    // 给数组赋值
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            b[i][j] = 3 * i + 2 * j - 8;
            // 这是用来输出数组的
            // printf("%2d ", b[i][j]);
            // if (j == 4) {
            //     printf("\n");
            // }
        }
    }
    // ①求第4 行的 5 个元素之累加和。
    int sum = 0;
    for (j = 0; j < 5; j++) {
        sum = sum + b[3][j];
    }
    printf("sum = %d\n", sum);
    // ②求第5 列的5个元素之平均值。
    float ave = 0;
    for (i = 0; i < 5; i++) {
        // printf("%d ", b[i][4]);
        ave = ave + (float)b[i][4] / 5;
    }
    printf("ave = %.2f\n", ave);
    // ③求主对角线（“\”状对角线有多少个负数
    int n;
    for (i = 0, n = 0; i < 5; i++) {
        if (b[i][i] < 0) {
            n++;
        }
    }
    printf("主对角线有%d个负数\n", n);
    // 反斜对角线（“/”状对角线）上各有多少个负数
    for (i = 4, j = 0, n = 0; j == 4; i--, j++) {
        if (b[i][i] < 0) {
            n++;
        }
    }
    printf("反斜对角线有%d个负数\n", n);
    return 0;
}