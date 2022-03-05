#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

const int N = 10010;
int b[N];
int n;
bool st[N];
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &b[i]);
    int circle = 0;
    for (int i = 1; i <= n; i++) {
        // 找环
        if (!st[b[i]]) {
            circle++;
            for (int j = i; !st[j]; j = b[j]) st[j] = true;
        }
    }
    // O(1) 输出最少次数
    printf("%d", n - circle);

    return 0;
}