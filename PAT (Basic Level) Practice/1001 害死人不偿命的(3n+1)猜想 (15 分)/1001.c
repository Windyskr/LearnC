//对任何一个正整数 n，如果它是偶数，那么把它砍掉一半；如果它是奇数，那么把
//(3n+1) 砍掉一半。
//对给定的任一不超过 1000 的正整数 n，简单地数一下，需要多少步（砍几下）才能得到
// n=1?
#include <stdio.h>
int cal(int n) {
    int i = 0;
    while (n != 1) {
        if ((n % 2) == 1) {
            n = ((3 * n + 1) / 2);
            ++i;
        } else {
            n = n / 2;
            ++i;
        }
    }
    return i;
}
//输入数字
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", cal(n));
    return 0;
}
