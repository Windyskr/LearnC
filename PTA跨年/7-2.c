#include <stdio.h>
#include <string.h>
int main() {
    char p[20];
    memset(p, -1, sizeof(p));
    int i, n = 20;
    for (i = 0; i < n; i++) {
        int cur;
        scanf("%d", &cur);
        p[i] = cur;
        char c = getchar();
        if (c == '\n') {
            break;
        }
    }
    int a = 0, d = 0, pin = 0;
    for (i = 0; i < 20; i++) {
        if (p[i] == 1) {
            a++;
        } else if (p[i] == (0)) {
            d++;
        } else {
            pin++;
        }
    }

    if (a > d) {
        printf("Yes\n");
        printf("%d:%d\n", a, d);
    } else if (a == d) {
        printf("Tie\n");
        printf("%d:%d\n", a, d);
    } else if (a < d) {
        printf("No\n");
        printf("%d:%d\n", a, d);
    }
    return 0;
}