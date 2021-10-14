#include <stdio.h>
int main()
{
    float a, b;
    scanf("%f%f", &a, &b);
    if (a > b)
    {
        printf("更大的是a=%f", a);
    }
    else
    {
        printf("更大的是b=%f", b);
    }
    return 0;
}