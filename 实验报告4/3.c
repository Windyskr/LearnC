/*（3）编写一个函数take()，该函数返回正整数n的第k位数字。
若n=543210，则take(n,0)，返回数字0，take(n,4)，返回数字4。从右到左，从0开始；*/
#include <math.h>
#include <stdio.h>
int take(int k, int n) {
    int tmp;
    int n1 = n;
    int i = 1;
    // 判断位数
    while (n1 / 10 != 0) {
        n1 = n1 / 10;
        i++;
    }
    // 如果输入的k比n的位数还大，报错
    if (i < k) {
        return 11;
    } else {
        // 注意是从0开始，所以要减1
        tmp = (int)(n / pow(10, i - k - 1)) % 10;
        return tmp;
    }
}
int main() {
    int k;
    int n;
    printf("请输入n,k：");
    scanf("%d,%d", &n, &k);
    if (take(k, n) == 11) {
        printf("输入错误！");
    } else {
        printf("%d\n", take(k, n));
    }
    return 0;
}