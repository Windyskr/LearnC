/*（1）编程序，实现如下功能：
  ①按如下方式说明数组x 与y
    const int k=8;
    int x[k], y[k];
  ②键盘输入k 个整数到数组x 中。
  ③计算x 中k 个数的平均值ave 及大于平均值的元素个数n 并输出。
  ④将数组 x
中的个数放入数组y中，但不重复放（一个数只放一次），而后输出y的这些有效元素。
例如，程序执行后的输入输出界面可设计为：
x=23 55 -6 0 23 23 0 -12
ave=13.25
n=4
y= 23 55 -6 0 -12
*/
#include <stdio.h>
int main() {
    const int k = 8;
    int x[k], y[k];
    int i, n, tmp, iy = 0, flag;
    float ave = 0;
    printf("x=");
    // ②键盘输入k 个整数到数组x 中。③计算x 中k 个数的平均值ave
    for (i = 0; i < k; i++) {
        scanf("%d", &x[i]);
        ave = ave + (float)x[i] / k;
    }
    // 大于平均值的元素个数n 并输出。
    printf("ave=%.2f\n", ave);
    for (i = 0; i < k; i++) {
        if (x[i] > ave) {
            n++;
        }
    }
    printf("n=%d\n", n);
    // ④将数组 x
    // 中的个数放入数组y中，但不重复放（一个数只放一次），而后输出y的这些有效元素。
    for (i = 0; i < k; i++) {
        // 检测是否重复
        // 其实这里用函数写更好，但是我偷懒了
        flag = 0;
        for (tmp = 0; tmp < i; tmp++) {
            if (y[tmp] == x[i]) {
                // 有重复的就退出
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            y[iy] = x[i];
            iy++;
        }
    }
    printf("y=");
    for (i = 0; i < iy; i++) {
        printf("%d ", y[i]);
    }
    printf("\n");
    return 0;
}