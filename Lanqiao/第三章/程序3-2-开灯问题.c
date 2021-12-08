#include <stdio.h>
#include <string.h>
int light[1000];
int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    // 先设置为 0，方便后面转换
    memset(light, 0, sizeof(int) * n);
    for (int i = 1; i <= k; i++) {
        for (int tmp = 0; tmp < n; tmp++) {
            // 注意灯的序号是数组序号加一
            if ((tmp + 1) % i == 0) {
                light[tmp] = !(light[tmp]);
            }
        }
    }
    // 输出
    for (int i = 0; i < n; i++) {
        if (light[i] == 1) {
            printf("%d", i + 1);
        }
    }
    return 0;
}