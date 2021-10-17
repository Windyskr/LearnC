#include <stdio.h>
int main()
{
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("更大的是a=%f", a);
        }
        else
        {
            printf("更大的是c=%f", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("更大的是b=%f", b);
        }
        else
        {
            printf("更大的是c=%f", c);
        }
    }
    return 0;
}