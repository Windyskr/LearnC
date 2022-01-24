#include <stdio.h>
char s[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
int main() {
    int i, c;
    while ((c = getchar()) != EOF) {
        // 这是在干嘛？
        for (i = 1; s[i] && s[i] != c; i++)
            ;
        //找到错位之后的字符在常量表中的位置
        if (s[i])  //如果找到，输出它的前一个字符
            putchar(s[i - 1]);
        else
            putchar(c);
    }
    return 0;
}