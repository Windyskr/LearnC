// 没啥意思的猴子吃桃
#include <stdio.h>
int main() {
    int n, i, end = 1;
    n = end;
    for (i = 10; i > 1; i--) {
        n = 2 * (n + 1);
    }
    printf("%d\n", n);
}