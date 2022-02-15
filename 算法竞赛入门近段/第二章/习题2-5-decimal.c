// 坑！
// strlen 是数组长度，数组长度 0 1 2 3 4，有 5 项，倒数第二项是 3，所以要减 2。
// 这个长度是计算到非 0 的数字的，也就是说 num[10] = {1,0,0,0,0},只有一项！
#include <math.h>
#include <stdio.h>
// 这是用来输出小数点后半段的
void chu(int a, int b, int c) {
    // 用来存放小数点的数组
    char num[101];
    // 计算的余数？不知道叫啥。
    int tmp = a;
    // 计数器，两次的用途不一样
    int i;
    // 位数
    int ws = 0;
    // 自己实现除法
    for (i = 0; i <= c; i++) {
        // 请看本文章旁边的图理解
        num[i] = (tmp * 10) / b;
        // printf("num[%d]=%d\n", i, num[i]);
        tmp = (tmp * 10) % b;
        ws++;
    }

    for (i = 0; i < (ws - 1); i++) {
        // 四舍五入
        if (i == (ws - 2)) {
            if (num[i + 1] > 4) {
                num[i] = num[i] + 1;
            }
        }
        printf("%d", num[i]);
    }
}
int main() {
    int a, b, c, kase = 0;
    while ((scanf("%d", &a)) && (scanf("%d", &b)) && (scanf("%d", &c)) &&
           !((a == 0) && (b == 0) && (c == 0))) {
        if (++kase) printf("\n");
        // 输出前半段
        printf("Case %d: 0.", kase);
        chu(a, b, c);
    }
    return 0;
}