#include <stdio.h>
int main() {
    int m1 = 1, m2 = 1;
    int i ,mx;
    printf("第几月>=?\n");
    scanf("%d", &mx);
    for (i = 1; i <= mx; i++) {
        m1 = m1 + m2;
        printf("%d\n", m1);
        m2 = m1 + m2;
        printf("%d\n", m2);
    }
    return 0;
}