#include <stdio.h>
void space(int x) {
    while (x--) {
        printf(" ");
    }
}
void jin(int x) {
    while (x--) {
        printf("#");
    }
}
int main() {
    int n;
    int i = 0;
    scanf("%d", &n);
    if (n <= 20 && n > 0) {
        while (n) {
            space(i++);
            jin(2 * (n--) - 1);
            printf("\n");
        }
    }
    return 0;
}