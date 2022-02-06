//读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
#include <stdio.h>
int main() {
    int c;
    int sum = 0;
    while ((c = getchar()) != '\n') {
        sum = sum + c - '0';
    }
    // printf("sum = %d\n", sum);
    int out[10] = {0};
    int i = 0;
    while (sum != 0) {
        out[i] = (sum % 10);
        ++i;
        sum = sum / 10;
    }
    i = i - 1;
    while (i + 1) {
        switch (out[i]) {
            case 0:
                // 服了，没有后鼻音导致填错了。
                printf("ling");
                break;
            case 1:
                printf("yi");
                break;
            case 2:
                printf("er");
                break;
            case 3:
                printf("san");
                break;
            case 4:
                printf("si");
                break;
            case 5:
                printf("wu");
                break;
            case 6:
                printf("liu");
                break;
            case 7:
                printf("qi");
                break;
            case 8:
                printf("ba");
                break;
            case 9:
                printf("jiu");
                break;
        }
        if (i != 0) {
            printf(" ");
        }
        i--;
    }
    return 0;
    printf("\n");
}
// 可以用字符串数组写
// https://www.jianshu.com/p/8c4af9ef6cb1