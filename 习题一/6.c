// （6）设有底圆半径为R1、高为H1 的圆柱体一个，底圆半径为R2、高为H2 的圆锥体一个。
// 编程序，从键盘输入R1、H1、R2、H2，而后计算出这两个物体的底圆面积之和sa，以及它们的体积之和sv，并将结果显示在屏幕上。
#include <stdio.h>
int main()
{
    const float PI = 3.14159;
    float R1, H1, R2, H2, sa, sv;
    printf("请输入R1,H1,R2,H2:");
    scanf("%f,%f,%f,%f", &R1, &H1, &R2, &H2);
    sa = PI * R1 * R1 + PI * R2 * R2;
    sv = PI * R1 * R1 * H1 + PI * R2 * R2 * H2;
    printf("底圆面积之和sa=%f,体积之和sv=%f\n", sa, sv);
    return 0;
}