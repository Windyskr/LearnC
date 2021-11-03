/* （3）求出1000 以内的所有“完全数”并输出它们（若n的包括1 但不包括n
 本身的所有因子之和等于n，则n 为“完全数”。如：6=1+2+3；28=1+2+4+7+14）。*/

// 非常啰嗦的写法，它又没问你有哪些因子，准备优化下。
#include <math.h>
#include <stdio.h>
int main() {
    long n, i, t = 1, tmp[6000], m, tx, n1;
    for (n = 1; n <= 1000; n++) {
        n1 = n;
        tmp[0] = 1;
        // printf("1是一个因子\n");
        for (i = 2; i < n; i++) {
            if (n % i != 0) {
                // printf("%d不是是一个因子\n", i);
            } else {
                // printf("%d是一个因子\n", i);
                tmp[t] = i;
                t++;
            }
        }
        for (m = 0, tx = 0; m < t; m++) {
            tx = tx + tmp[m];
        }
        if (tx == n1) {
            printf("%ld这是一个完全数\n", n1);
        } else {
            // printf("%ld这不是一个完全数\n", n1);
        }
        // 清 0
        for (m = 0; m < t; m++) {
            tmp[m] = 0;
        }
    }
    return 0;
}