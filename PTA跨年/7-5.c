#include <stdio.h>
int main() {
    long a, b;
    scanf("%ld %ld", &a, &b);
    int wei = 0;
    int c = a;
    while ((c = c / 10) != 0) {
        wei++;
    }
    for (int i = 0; i < wei; i++) {
        /* code */
    }
}
