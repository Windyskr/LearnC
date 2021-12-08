#include <stdio.h>
#include <string.h>
int snake[8][8];
int main() {
    int n;
    scanf("%d", &n);
    memset(snake, 0, sizeof(int) * n);
    snake[0][n - 1] = 1;
    for (int i = 1; i <= (n * n); i++) {
        // 不会填了
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2d", snake[i][j]);
        }
        printf("\n");
    }

    return 0;
}