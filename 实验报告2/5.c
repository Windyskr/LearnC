#include <stdio.h>
#include <math.h>
int main()
{
    double x, fx;
    int i;
    float a[7] = {-1.0, -0.5, 0, 0.5, 1.5, 2.5, 3.5, 4.5, 5.5};
    for (i = 0; i <= 6; i++)
    {
        x = a[i];
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
        printf("X=%f,f(x)=%f\n", x, fx);
    }
    return 0;
}