#include <stdio.h>
int main()
{
    float I = 0, p1_2, p2_3, p3_4, p4_5, p5_6, p6_10, P10, M, tmp;
    printf("请输入利润：");
    scanf("%f", &I);
    tmp = I;
    if (tmp > 1000000)
    {
        I += 0.01 * (I - 100000);
        tmp = I - 1000000;
    }
    if (tmp > 600000)
    {
        I += 0.01 * (I - 600000);
        tmp = I - 600000;
    }
    if (tmp > 400000)
    {
        I += 0.01 * (I - 40000);
        tmp = I - 600000;
    }
    if (tmp > 200000)
    {
        I += 0.01 * (I - 200000);
    }
}