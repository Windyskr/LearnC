#include <stdio.h>
#include <math.h>
int main()
{
    double x, fx;
    printf("X=");
    scanf("%lf", &x);
    if (x < 0 && x != -4)
    {
        fx = 2 * pow(x, 2) + 3 * x - 4;
    }
    else if (x >= 0 && x < 10 && x != 1 && x != 5)
    {
        fx = 2 * pow(x, 2) - 6 * x + 5;
    }
    else
    {
        fx = 2 * pow(x, 2) - 4 * x - 1;
    }
    printf("f(x)=%f\n", fx);
    return 0;
}