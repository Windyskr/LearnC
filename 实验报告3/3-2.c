/* （3）求出1000 以内的所有“完全数”并输出它们（若n的包括1 但不包括n
 本身的所有因子之和等于n，则n 为“完全数”。如：6=1+2+3；28=1+2+4+7+14）。*/
//  重做
#include <math.h>
#include <stdio.h>
int main() {
    int n, i, yingzi;
    // 数字循环
    for (n = 1; n <= 1000; n++) {
        // 对每一个数字，进行求因子
        // 因为不知道循环要运行几次，使用 while 循环
        // 每一次循环，初始值需要重新设置
        yingzi = 0;
        i = 1;
        while (i < n) {
            // 如果能整除，就证明是因子。
            if (n % i == 0) {
                yingzi = yingzi + i;
            }
            i++;
        }
        if (yingzi == n) {
            printf("%d这是一个完全数\n", n);
        }
    }
    return 0;
}