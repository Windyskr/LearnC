// 不包括空格-可以用scanf输入
// 回文串 abba madam
// 镜像串 2S 3AIAE
#include <ctype.h>
#include <stdio.h>
#include <string.h>
const char* rev = "A   3  HIL JM )   2TUVWXY51SE Z  8 ";
const char* msg[] = {"not a palindrome", "a regular palindrome",
                     "a mirrored string", "a mirrored palindrome"};
// 输出镜像字符的函数
char r(char ch) {
    // 如果是一个字母
    if (isalpha(ch)) return rev[ch - 'A'];
    // 如果是一个数字1 1-0=1 1+25=26 也就是第27项！
    return rev[ch - '0' + 25];
}
int main() {
    char s[30];
    while (scanf("%s", s) == 1) {
        int len = strlen(s);
        int p = 1, m = 1;
        for (int i = 0; i < (len + 1) / 2; i++) {
            // 注意比较的方式，还是要注意strlen
            if (s[i] != s[len - 1 - i]) p = 0;     //不是回文串
            if (r(s[i]) != s[len - 1 - i]) m = 0;  //不是镜像串
        }
        printf("%s -- is %s.\n\n", s, msg[m * 2 + p]);
    }
    return 0;
}