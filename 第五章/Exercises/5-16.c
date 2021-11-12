#include <math.h>
#include <stdio.h>
int main() {
    // 上半部分
    int i, tmp;
    for (i = 1; i < 5; i++) {
        for (tmp = 0; tmp < (5 - i - 1); tmp++) {
            printf(" ");
        }
        for (tmp = 0; tmp < 2 * i - 1; tmp++) {
            printf("*");
        }
        printf("\n");
    }
    // 下半部分
    for (i = 1; i < 4; i++) {
        for (tmp = 0; tmp < i; tmp++) {
            printf(" ");
        }
        for (tmp = 7; tmp > 2 * i; tmp--) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}