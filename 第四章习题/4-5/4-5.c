#include <stdio.h>
#include <math.h>
int main()
{
    float zs , pfg;
    printf ("请输入一个小于1000的正数\n");
    scanf ("%f",&zs);
    if (zs > 1000)
        {
            printf("请重新输入\n");
        }
    else
        {
            pfg = sqrt(zs);
            printf("平方根的整数部分为%.0f\n", pfg);
        }
}

// 挖坑2，学完循环后重写。