#include <stdio.h>
#include <math.h>
int main()
{
    float r = 0.07, p;
    int n = 10;
    p = pow((1 + r), n);
    // pow 乘方函数，必须在头文件应用 <math.h>
    printf("%f\n", p);
}