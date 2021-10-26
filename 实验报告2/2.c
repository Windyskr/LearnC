// （2）从键盘输入三个正整数，判断它们是否勾股数。
#include <stdio.h>
#include <math.h>
int main()
{
    int z1, z2, z3;
    printf("请输入三个正整数:");
    scanf("%d,%d,%d", &z1, &z2, &z3);
    if ((pow(z1, 2) + pow(z2, 2) == pow(z3, 2)) || (pow(z2, 2) + pow(z3, 2) == pow(z1, 2)) || (pow(z1, 2) + pow(z2, 2) == pow(z3, 2)))
    {
        printf("是勾股数\n");
    }
    else
    {
        printf("不是勾股数\n");
    }
    return 0;
}