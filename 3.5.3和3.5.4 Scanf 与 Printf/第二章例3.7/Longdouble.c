#include <stdio.h>
int main()
{
    long double a;
    // 直接 double /Long Double 就可以了，不是 double float
    a = 10000.0 / 3, 0;
    printf("%Lf\n", a);
    // scanf中%f对应float，%lf对应double；printf中因为float会自动提升类型到double，所以只需要%f就行了。Longdouble 才是 Lf。    return 0;
}
