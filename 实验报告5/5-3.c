// （3）用选择法对10个整数排序，10个整数由键盘输入；
#include <stdio.h>
int main() {
    int arr[9];
    int i;
    // 键盘输入
    while (i < 9) {
        scanf("%d", &arr[i]);
        i++;
    }
    // 选择法排序
    for (i = 0; i < 9; i++) {
        // 判断是不是最小，最小
        int min = arr[i];
        int nmin = i;
        // 从 i 开始向后找最小项，把最小项的值赋 min
        for (int n = i + 1; n < 9; n++) {
            if (arr[n] < arr[nmin]) {
                nmin = n;
            }
        }
        // 交换 arr[i] 与 arr[nmin]
        int tmp = arr[i];
        arr[i] = arr[nmin];
        arr[nmin] = tmp;
    }
    // 再输出
    for (i = 0; i < 9; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
