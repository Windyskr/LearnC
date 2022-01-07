#include <stdio.h>
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if ((a != 0) || (b != 0)) {
        if ((a < 0) && (b < 0)) {
            printf("%d %d\n-_-", 0, 0);
        } else {
            if (b > a) {
                printf("%d %d\n^_^", b, a + b);
            } else {
                printf("%d %d\nT_T", a, 0);
            }
        }
    }

    return 0;
}