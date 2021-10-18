#include <stdio.h>
int main()
{
    int san, b, s, g;
    scanf("%d", &san);
    g = san % 10;
    s = san / 10 % 10;
    b = san / 100 % 10;
    printf("百位数是%d,十位数是%d,个位数是%d。\n", b, s, g);
    return 0;
}