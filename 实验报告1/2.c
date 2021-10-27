// （2）输入三个实数a、b、c，求出方程ax2+bx+c=0 的两个实根并显示在屏幕上。
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, deta, x, x1, x2, xubu, shibu;
    printf("请输入三个实数：");
    scanf("%f,%f,%f", &a, &b, &c);
    deta = pow(b, 2) - 4 * a * c;
    if (a == 0)
    {
        if (b == 0)
        {
            printf("这不是一个函数!\n");
        }
        else
        {
            x = (-b) / c;
            printf("这是一个一次函数。函数的解为%f\n", x);
        }
    }
    else
    {

        if (deta < 0)
        {
            xubu = sqrt(-deta) / (2 * a);
            shibu = -b / (2 * a);
            printf("这个二次函数有两个虚根\n一个是 %f+%fi,另一个是 %f-%fi\n ", shibu, xubu, shibu, xubu);
        }
        else
        {
            x1 = (-b + sqrt(deta)) / 2 * a;
            x2 = (-b - sqrt(deta)) / 2 * a;
            printf("这个二次函数有两个实根\n一个根是%f,另一个根是%f\n", x1, x2);
        }
    }
    return 0;
}