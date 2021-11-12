// 二分法，这个也不懂
#include <math.h>
#include <stdio.h>
int main() {
    float x1 = -10, fx1, x2 = 10, fx2, x, fx, i;
    while (fabs(fx) > 1e-5) {
        fx = 2 * ((x1 + x2) / 2) * ((x1 + x2) / 2) * ((x1 + x2) / 2) -
             4 * ((x1 + x2) / 2) * ((x1 + x2) / 2) + 3 * ((x1 + x2) / 2) - 6;
    }
    return 0;
}