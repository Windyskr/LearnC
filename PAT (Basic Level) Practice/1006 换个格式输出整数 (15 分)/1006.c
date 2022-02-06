#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int tmp[3] = {0};
    int i = 0;
    while (n != 0) {
        tmp[i] = n % 10;
        n = n / 10;
        i++;
    }
    while (tmp[2]--) {
        printf("B");
    }
    while (tmp[1]--) {
        printf("S");
    }
    int ge = 1;
    while (tmp[0]--) {
        printf("%d", ge++);
    }
    printf("\n");
    return 0;
}