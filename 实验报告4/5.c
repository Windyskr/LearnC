// （5）编写函数 int strFind(char str[],char c)
// 在字符串str中查找指定字符c。如果有该字符，则返回该字符在字符串中第一次出现的位置；否则返回-1。在main函数中调用该函数。
#include <stdio.h>
#include <string.h>
int strFind(char str[], char c) {
    int i;
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == c) {
            return i;
        }
    }
    return -1;
}
int main() {
    char str[30];
    char c;
    printf("请输入字符串:");
    gets(str);
    printf("输入字符:");
    scanf("%c", &c);
    if (strFind(str, c) == -1) {
        printf("不存在！\n");
    } else {
        printf("在第%d位\n", strFind(str, c));
    }
    return 0;
}