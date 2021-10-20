// （1）从键盘输入实数a，b和c，计算出w = b2– 4ac 以及t =πw2 + 2a – bc，而且要使运行的结果w与t显示在屏幕上。
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, w, t;
    const float PI = 3.14159;
    printf("请输入实数a,b,c:");
    scanf ("%f,%f,%f", &a, &b, &c);
    w = pow( b, 2) - 4 * a * c;
    t = PI * pow(b, 2) - 4 * a * c;
    printf ("w 的值为%f，t 的值为 %f\n", w, t);
    return 0;
}