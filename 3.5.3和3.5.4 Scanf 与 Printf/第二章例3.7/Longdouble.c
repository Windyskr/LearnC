#include <stdio.h>
int main()
{
    long double a;
    //直接 double /Long Double 就可以了，不是 double float
    a = 10000 / 3, 0;
    printf("%Lf\n", a);
    // Lf 是大写的 L
    return 0;
}
