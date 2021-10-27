// （1）从键盘输入实数a，b和c，计算出w = b2– 4ac 以及t =πw2 + 2a – bc，而且要使运行的结果w与t显示在屏幕上；
#include <stdio.h>
int main()
{
    const float PI = 3.14159;
    float a, b, c, w, t;
    printf("请输入实数a,b,c:");
    scanf("%f,%f,%f", &a, &b, &c);
    w = b * b - 4 * a * c;
    t = PI * w * w + 2 * a - b * c;
    printf("w= %f,t= %f\n", w, t);
    return 0;
}