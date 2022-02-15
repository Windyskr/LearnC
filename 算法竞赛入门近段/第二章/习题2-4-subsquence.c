#include <stdio.h>
double cal(long n, long m) {
    double sum = 0;
    for (n = n - 1; n < m; n++) {
        sum += 1 / (double)((n + 1) * (n + 1));
    }
    return sum;
}
int main() {
    int kase = 0;
    long n, m;
    while ((scanf("%ld%ld", &n, &m)) && ((n != 0) && (m != 0))) {
        if (kase) printf("\n");
        printf("Case %d:%.5f", ++kase, cal(n, m));
    }
    return 0;
}