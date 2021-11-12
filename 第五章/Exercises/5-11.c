// 不知道为啥，总答案是对的，但是第十次的答案做不对。
#include <stdio.h>
int main() {
    int n = 10, i = 1;
    float height = 100, sum = 0;
    sum = height;
    for (i = 1; i < n; i++) {
        sum = sum + height;
        height = height / 2;
    }
    printf("第%d次反弹%f米\n", i, 2 * height);
    printf("共经过%f米\n", sum);
    return 0;
}