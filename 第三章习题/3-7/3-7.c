#include <stdio.h>
int main()
{
    const float PI = 3.14159 ;
    float r, h, c, s, qs, qv, zt;
    printf("请输入圆半径，高\n");
    scanf("%f%f",&r,&h);
    // 圆周长
    c = 2 * PI * r;
    printf("圆周长为%6.2f\n",c);
    // 圆面积
    s = 2 * PI * r;
    printf("圆面积为%.2f\n",s);
    // 圆球表面积
    qs = 3.0/4 * PI * r * r;
    printf("圆球的表面积为%.2f\n",qs);
    // 圆球体积
    qv = 4 * r * r;
    printf("圆球的体积为%.2f\n",qv);
    // 圆柱体体积
    zt = s * h;
    printf("圆柱体的体积为%.2f\n",zt);
    return 0 ;
}