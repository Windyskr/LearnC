// 字符串中必须仅有 P、 A、 T这三种字符，不可以包含其它字符； 任意形如 xPATx
//     的字符串都可以获得“答案正确”，其中 x 或者是空字符串，或者是仅由字母 A
//         组成的字符串； 如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中
//             a、 b、 c 均或者是空字符串，或者是仅由字母 A 组成的字符串。
#include <stdio.h>
int Ok(int arr[], int idx);
int main() {
    int n;
    // 第一行的数字
    scanf("%d", &n);
    // 输入字符串
    while (n) {
        int arr[20];
        int idx = 0;
        int c;
        int is;
        if ((c = getchar()) != '\n') {
            if ((c != 'P') && (c != 'A') && (c != 'T')) is = 0;
            arr[idx++] = c;
        }
        // if (is != 0) is = Ok(arr, idx);
        if (is) {
            printf("YES");
        } else {
            printf("NO");
        }
        n--;
    }
    return 0;
}

// 0-错误 1-正确
int Ok(int arr[], int idx) {
    int a;
    int i = 0;
    for (i; i <= idx; i++) {
    }
    return 0;
}
