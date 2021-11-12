// 额，只要算出来就可以了吧。
#include <stdio.h>
int main() {
    int i;
    float m = 1, n = 2, x = 2, y = 3, sum = 0;
    for (i = 1; i <= 10; i++) {
        sum = sum + x / m;
        sum = sum + y / n;
        m = m + n;
        n = m + n;
        x = x + y;
        y = x + y;
    }
    printf("sum = %f\n", sum);
}