// 求100-200的全部素数Pro Max
// 输入范围，求出所有范围内所有素数
#include <math.h>
#include <stdio.h>
int main() {
    int n, i, flag, m = 0, start, final;
    printf("请输入范围初值，末值:");
    scanf("%d,%d", &start, &final);
    for (n = start; n <= final; n++) {
        flag = 0;
        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            m++;
            printf("%d ", n);
            if (m % 10 == 0) {
                printf("\n");
            }
        }
    }
    printf("\n所选范围总共有%d个素数\n", m);
    return 0;
}