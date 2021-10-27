#include <stdio.h>
int main()
{
    int zhengshu1, zhengshu2;
    printf("请输入两个正整数:");
    scanf("%d,%d", &zhengshu1, &zhengshu2);
    if ((zhengshu1 % zhengshu2 == 0) || (zhengshu2 % zhengshu1 == 0))
    {
        printf("有倍数关系\n");
    }
    else
    {
        printf("没有倍数关系\n");
    }
    return 0;
}