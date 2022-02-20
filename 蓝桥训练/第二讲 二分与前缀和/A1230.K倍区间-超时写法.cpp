#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 1e5 + 10;

int arr[N];
int n, k;
// 计数
int cnt;

void check(int i, int j) {
    if ((arr[j] - arr[i - 1]) % k == 0) cnt++;
}

int main() {
    cin >> n >> k;
    // 从第一项开始，防止越界
    int i = 1;
    while (n--) {
        scanf("%d", &arr[i]);
        if (arr[i] % k == 0) cnt++;
        // 算出前缀和
        arr[i] = arr[i - 1] + arr[i];
        i++;
    }
    // 排列出就行
    for (int a = 1; a < i - 1; a++)
        for (int b = a + 1; b < i; b++) check(a, b);

    printf("%d\n", cnt);
    return 0;
}