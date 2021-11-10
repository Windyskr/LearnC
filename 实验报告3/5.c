// （5）编写程序，输入一个n(2<=n<=7)值，输出入右所示的菱形图形(n=5)。
#include <stdio.h>
int main() {
    int i, n, space, zimu = 0;
    // zimu 是 字母数字 变量，每输出一次字母，就减一。具体请看后面的代码实现。
    char init;
    init = 'Z';
    // 这是第一个字母 Z 。
    printf("请输入n(2<=n<=7):");
    // n 是你所输入的行数字
    scanf("%d", &n);
    // 当 n = 5 时，第一次输出五行，第二次四行。
    //
    // 这是上半段
    if (n >= 2 && n <= 7) {
        for (i = 1; i <= n; i++) {
            // 首先输出前空格
            // 找规律，n = 5 时第一行 4 个，第二行 3 个，第三行 2 个
            for (space = 1; space < n - i + 1; space++) {
                printf(" ");
            }
            // 输出第一个字符
            printf("%c", init - zimu);
            zimu++;
            // 判断是否是第一行
            if (i != 1) {
                // 如果是，输出中间空格。
                // 找规律，n = 5 时，第一行 0 个，第二行 1 个，第三行 3
                // 个，第四行 5 个.
                for (space = 1; space < 2 * (i - 1); space++) {
                    printf(" ");
                }
                // 输出字符。
                printf("%c", init - zimu);
                zimu++;
            }
            printf("\n");
        }

        // 这是下半段
        // 注意字母 R 重复了两次
        zimu--;
        for (i = 1; i <= n - 1; i++) {
            // 前空格，每一个都有
            // 第一行一个空格
            for (space = 1; space <= i; space++) {
                printf(" ");
            }
            // 输出第一个字符
            printf("%c", init - zimu);
            zimu++;
            // 判断是否是最后一行
            if (i != n - 1) {
                // 如果是，输出空格和字符
                for (space = 1; space < 2 * (n - i - 1); space++) {
                    printf(" ");
                }
                printf("%c", init - zimu);
                zimu++;
            }
            printf("\n");
        }
    } else {
        printf("输入错误！\n");
    }
    return 0;
}