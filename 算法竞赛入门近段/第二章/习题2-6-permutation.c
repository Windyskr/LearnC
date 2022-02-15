#include <stdio.h>
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
                int num1, num2, num3;
                // 生成 num1, 它是   a b c
                num1 = 100 * a + 10 * b + c;
                // 生成 num 2,分解为 d e f
                num2 = 2 * num1;
                int d = num2 / 100 % 10, e = num2 / 10 % 10, f = num2 % 10;
                // 分解 num 3,分解为 h i j
                num3 = 3 * num1;
                int h = num3 / 100 % 10, i = num3 / 10 % 10, j = num3 % 10;
                if ((e != 0) && (f != 0) && (i != 0) && (j != 0)) {
                    // printf("\n%d %d %d\n", num1, num2, num3);
                    // 放到数组中
                    char tmp[9] = {a, b, c, d, e, f, h, i, j};
                    // 找不一样
                    int flag = 0;
                    for (int fi = 0; fi < 9; fi++) {
                        for (int fn = 0; fn < fi; fn++) {
                            // printf("%d %d\n", tmp[fi], tmp[fn]);
                            if (fn != fi && tmp[fi] == tmp[fn]) {
                                // 如果它有相等，证明他不是一个互不相同的数字
                                // printf("Fuck1");
                                flag = 1;
                            }
                        }
                    }
                    // 如果flag是0，他是一个互不相同的数字
                    if (!(flag))
                        printf("找到你了！ %d %d %d\n", num1, num2, num3);
                }
                // 恢复数字
                // arr[ai] = a;
                arr[bi] = b;
                arr[ci] = c;
            }
        }
    }
    return 0;
}