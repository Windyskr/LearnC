// （1）键盘输入正整数n，求出n
// 与其反序数x之和并输出。例如，输入2038，输出应为：n + x = 2038 + 8302 = 10340

// 设计出现了问题，推到重来
#include <math.h>
#include <stdio.h>
int main() {
    int n, nf, i, tmp[10]={0};
    printf("请输入一个正整数:");
    scanf("%d", &n);
    if (n > 0) {
        nf = 0;
        // printf("输入正确\n");
        for (i = 0; i<=9; i++) {
            tmp[i] = n / (int)(pow(10,i)) % 10;
            if (tmp[i] == 0) continue;
            nf = nf + tmp[i] * (int)(pow(10,10 - i));
        }
        printf("反序数是:%d\n", nf);
        printf("n与反序数之和是:%d\n", n + nf);
    } else {
        printf("输入错误\n");
    }
    return 0;
}