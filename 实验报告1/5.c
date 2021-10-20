// （5）编写程序，输入一个3位数，将它反向输出。如456，输出654.
#include <stdio.h>
int main()
{
    int san, b, s, g;
    printf("请输入一个三位数:");
    scanf("%d", &san);
    g = san % 10;
    s = san / 10 % 10;
    b = san / 100 % 10;
    printf("%d%d%d\n", g, s, b);
    return 0;
}