// （2）输入一个5位以内的正整数，①判断它是一个几位数；②按顺序输出各位数字；③逆序输出各位数字。
// 如输入56439，输出为：5位数 5, 6, 4, 3, 9, 9, 3, 4, 6, 5
#include <math.h>
#include <stdio.h>
int main() {
    int n, i, tmp[5], x, m = 0;
    printf("请输入一个五位以内的整数:");
    scanf("%d", &n);
    if (n < 100000 && n > 0) {
        // 利用 While 循环，判断位数。
        x = n;
        while (x != 0) {
            x = x / 10;
            // 每执行一次 m 就加 1 。
            m++;
        }
        printf("这是一个%d位数\n", m);
        // 倒着放入数组中，注意数组中元素从 0 开始，最后一项是 m - 1 。
        for (i = m - 1; i >= 0; i--) {
            tmp[i] = n / (int)(pow(10, i)) % 10;
            // 因为先求的是最高位（看这个 pow 函数），直接输出就是正序输出。
            printf("%d", tmp[i]);
            // 加上逗号
                printf(",");
        }
        // 再逆序提取出来。
        for (i = 0; i <= m - 1; i++) {
            printf("%d", tmp[i]);
            // 加上逗号，注意别加多了。
            if (i < m-1) {
                printf(",");
            }
        }
        printf("\n");
    } else {
        printf("输入错误！\n");
    }
    return 0;
}