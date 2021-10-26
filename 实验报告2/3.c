// （3）输入一个字符，判定字符是数字、小写字母、大写字母、其他字符。
#include<stdio.h>
int main()
{
    char c;
    printf("请输入一个字符:");
    scanf("%c", &c);
    if (c>='1' && c<'9')
    {
        printf("是数字\n");
    }
    else if (c >= 'a' && c < 'z')
    {
        printf("是小写字母\n");
    }
    else if (c >= 'A' && c < 'Z')
    {
        printf("是大写字母\n");
    }
    else
    {
        printf("是数字\n");
    }
    return 0;
}
