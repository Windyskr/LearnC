#include <stdio.h>
#include <string.h>
int main() {
    int count = 0;
    // buf 是缓存区（buffer 的简称）
    char s[20], buf[99];
    scanf("%s", s);
    for (int abc = 111; abc <= 999; abc++)
        for (int de = 11; de <= 99; de++) {
            int x = abc * (de % 10), y = abc * (de / 10), z = abc * de;
            // sprintf 是输出到字符串，注意它的用法
            // 就是把这几个数字拼接起来，方面后面的查找
            sprintf(buf, "%d%d%d%d", abc, de, x, y, z);
            int ok = 1;
            // strlen 获取的是实际长度
            for (int i = 0; i < strlen(buf); i++)
                // strchr 在一个字符串中查找单个字符
                // 如果找不到，ok=0
                if (strchr(s, buf[i]) == NULL) ok = 0;
            if (ok) {
                printf("<%d>\n", ++count);
                printf("%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n", abc, de, x,
                       y, z);
            }
        }
    printf("The number of the solution = %d\n", count);
    return 0;
}