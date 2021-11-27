#include <stdio.h>

//输出n个空格
void space(int n) {
    while (n--) printf("0");
}

//输出count对应大写字母
void trans(int count) { printf("%c", 'Z' + 1 - count); }

int main() {
    {
        int n;
        printf("请输入一个2到7的整数n：");
        scanf("%d", &n);
        if (n < 2 || n > 7)
            printf("输入有误！\n");
        else {
            //我们采用1代表Z，2代表Y，..... ，26代表A
            //明显第一个输出Z，故count=1
            int count = 1;  // count用计数已经输出第几个字母了

            //先输出第一行
            space(n - 1);
            trans(count++);
            space(n - 1);
            printf("\n");

            //再输出中间行
            for (int i = n - 1; i >= 1; i--) {
                space(i - 1);
                trans(count++);

                space(2 * n - 1 - 2 * i);

                trans(count++);
                space(i - 1);
                printf("\n");
            }

            count--;

            for (int i = 1; i <= n - 2; i++) {
                space(i);
                trans(count++);

                space(2 * n - 2 * i - 3);

                trans(count++);
                space(i);
                printf("\n");
            }

            //最后一行
            space(n - 1);
            trans(count++);
            space(n - 1);
            printf("\n\n");
        }
    }

    return 0;
}