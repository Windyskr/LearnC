// scanf("%s")来输入字符串，遇到空格或者TAB就会停下来。
#include <stdio.h>
int main() {
    int c, q = 1;
    // 非常巧妙的用法！
    while ((c = getchar()) != EOF) {
        if (c == '"') {
            printf("%s", q ? "``" : "''");
            q = !q;
        } else
            printf("%c", c);
    }
    return 0;
}