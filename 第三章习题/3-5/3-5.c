#include <stdio.h>
int main()
{
    int a, b;
    float x, y;
    char c1, c2;
    scanf("a=%db=%d", &a, &b);
    scanf("%f%e", &a, &y);
    scanf("%c%c", &c1, &c2);
    return 0;
}

// 很奇怪，Mac 编译上报错，Win 平台下 Dev C++ 正常