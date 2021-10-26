// (4）从键盘输入三个整数，程序先判断它们能否构成三角形的三条边长，如果构成三角形，则求出三角形的面积。
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    float t, s;
    printf("请输入三个整数:");
    scanf("%d,%d,%d", &a, &b, &c);
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("能构成三角形\n");
        t = (float)(a + b + c) / 2;
        s = sqrt(t * (t - a) * (t - b) * (t - c));
        printf("三角形的面积是%f\n", s);
    }
    else
    {
        printf("不能构成三角形\n");
    }
    return 0;
}