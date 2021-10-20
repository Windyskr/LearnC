// （2）输入三个实数a、b、c，求出方程ax2+bx+c=0 的两个实根并显示在屏幕上。
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, deta, x1, x2;
    printf ("请输入三个实数：");
    scanf ("%f,%f,%f", &a, &b, &c);
    deta = pow(b, 2) - 4 * a * c;
    if (deta < 0)
    {
        printf("函数无解\n");
        return 0;
    }
    x1 = (- b + sqrt(deta)) / 2 * a;
    x2 = (- b - sqrt(deta)) / 2 * a;
    printf("一个根是%f,另一个根是%f\n", x1, x2);
    return 0 ;
}