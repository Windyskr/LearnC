#include <stdio.h>
int main() {
    long n, i = 10, x = 1, m;
    printf("请输入一个五位以内的正整数:");
    scanf("%ld", &n);
    m = n;
    while (n / i != 0) {
        i = i * 10;
        x++;
    }
    printf("%ld位数\n", x);
    i = i / 10;
    while (i != 0) {
        printf("%ld,", n / i);
        n = n % i;
        i = i / 10;
    }
    printf("\n");
    while (m != 0) {
        printf("%ld,", m % 10);
        m = m / 10;
    }
    printf("\n");
    return 0;
}