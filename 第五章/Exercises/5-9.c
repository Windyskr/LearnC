// 一个数字是他的因子之合，是完数。
// 6 its factors are 1,2,3
#include <stdio.h>
int main() {
    int n, i, sum, n1, n2;
    for (n = 1; n <= 1000; n++) {
        // 对程序运行结果进行分析，把结果分为两段。
        // 使下面这个循环进行两次，一次是判断是否是完数，第二次是为了输出后部分。
        for (i = 0, n1 = 0, sum = 0; i < n; i++) {
            if (n % i == 0) {
                sum = sum + i;
                //  n1 计数，方便后面加逗号
                n1++;
            }
        }
        // 这是第二段
        if (sum == n) {
            printf("%d its factors are ", n);
            for (i = 0, n2 = 0; i < n; i++) {
                if (n % i == 0) {
                    printf("%d", i);
                    // n2 计数
                    n2++;
                    if (n2 < n1) {
                        printf(",");
                    }
                }
            }
            printf("\n");
        }
    }
    return 0;
}