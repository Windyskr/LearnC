/*（1）设f(x) = x * x + x / 2.1–8；
        g(x) =2 * f(x) – 3.5 * f(2 * x) + 5.5；
        编程序，对x =-5， - 4， -3，…，3，4，5，
        计算各g(x)之值并输出这11个计算结果。*/
#include <stdio.h>
float fx(int x) {
    float fxy;
    fxy = x * x + x / 2.1 - 8;
    return fxy;
}

float gx(int x) {
    float gxy;
    gxy = 2 * fx(x) - 3.5 * fx(2 * x) + 5.5;
    return gxy;
}

int main() {
    int x;
    for (x = -5; x < 5; x++) {
        printf("g(%d)=%.2f\n", x, gx(x));
    }
    return 0;
}