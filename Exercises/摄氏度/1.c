#include <stdio.h>
int main()
{
    float c, F;
    F = scanf("%f", &F);
    c = 5 * (F - 32) / 9;
    printf("摄氏温度=%.2f", c);
    return 0;
}