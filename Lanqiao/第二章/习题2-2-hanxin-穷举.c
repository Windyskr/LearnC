// 韩信点兵-1 穷举
#include <stdio.h>
#define MIN 10
#define MAX 100
int hanxin(int a, int b, int c) {
    int i;
    for (i = MIN; i < MAX; i++) {
        if ((i % 3 == a) && (i % 5 == b) && (i % 7 == c)) {
            return i;
        }
    }
    return 0;
}
int main() {
    int sum, a, b, c, kase = 0;
    while ((scanf("%d", &a)) && (scanf("%d", &b)) && (scanf("%d", &c))) {
        printf("Case %d:", ++kase);
        if ((sum = hanxin(a, b, c)) != 0) {
            printf("%d", sum);
        } else {
            printf("No answer");
        }
        printf("\n");
    }
    return 0;
}