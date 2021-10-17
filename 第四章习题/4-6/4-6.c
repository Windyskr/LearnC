#include <stdio.h>
// 04/24
int main()
{
    float x, y;
    scanf("%f",&x);
    if (x<1)
    {
        printf("%f",x);
    }
    else if (x<10)
    {
        y = 2 * x -1;
        printf("%f",y);
    }
    else
    {
        y = 3 * x - 11;
        printf("%f",y);
    }
    return 0;
}