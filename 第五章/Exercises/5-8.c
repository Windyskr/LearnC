#include <stdio.h>
int main() {
    int i, bai, shi, ge;
    for (i = 100; i < 1000; i++) {
        ge = i % 10;
        shi = i / 10 % 10;
        bai = i / 100 % 10;
        if ((ge * ge * ge + shi * shi * shi + bai * bai * bai) == i) {
            printf("这是一个水仙花数: %d。\n", i);
        } else {
            // printf("这不是一个水仙花数\n");
        }
    }
    return 0;
}