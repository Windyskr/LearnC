/*
5. 求 Sn=a十aa十aaa十⋯…十aaa之值，其中a是一个数字,n 表示a的位数，n由键盘
输人。例如：
2+22+222+2222+22222
(此时1=5）
*/
#include <math.h>
#include <stdio.h>
int main() {
    int a, n, sum = 0, i, tmp, c;
    printf("请输入a,n:");
    scanf("%d,%d", &a, &n);
    for (i = 0; i <= n; i++) {
        // 求出 1 + 11 + 111 + ****
        // 新定义了一个 c 变量。
        for (c = 0,tmp = 0; c < i; c++) {
            tmp = tmp + pow(10, c);
        }
        sum = sum + a * tmp;
    }
    printf("%d\n", sum);
    return 0;
}