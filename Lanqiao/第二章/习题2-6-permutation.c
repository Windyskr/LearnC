#include <stdio.h>
// int num[3];
// int select() {
//     char num[3];
//     int i = 0;
//     int n = 0;
//     for (; i < 8; i++) {
//         if (arr[i]) {
//             num[n] = arr[i];
//             arr[i] = 0;
//             n++;
//         }
//     }
//     // 返回格式化后的数字
//     return (num[0] * 100 + num[1] * 10 + num[2]);
// }

int main() {
    int a, b, c, kase = 0;
    // 百位
    for (int ai = 0; ai < 3; ai++) {
        char arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        a = arr[ai];
        arr[ai] = 0;
        // 十位
        for (int bi = 0; bi < 9; bi++) {
            if (!arr[bi]) continue;
            b = arr[bi];
            arr[bi] = 0;
            // 个位
            for (int ci = 0; ci < 9; ci++) {
                if (!arr[ci]) continue;
                c = arr[ci];
                arr[ci] = 0;
                // 输出
                printf("num1 = %d", 100 * a + 10 * b + c);
            }
        }
        // 判断是否是对的
        // printf("%d %d %d\n", num1, num2, num3);
        // if ((2 * num1 == num2) && (3 * num1 == num3)) {
        //     printf("%d %d %d", num1, num2, num3);
        //     if (++kase) printf("\n");
        // }
        // // 一次选择完成，恢复数列
    }
    return 0;
}