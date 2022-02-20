#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

const int N = 1e5 + 10;
int n, k;
long long arr[N], yu[N];

int main() {
    cin >> n >> k;
    // 从第一项开始，防止越界
    for (int i = 1; i <= n; i++) {
        scanf("%lld", &arr[i]);
        // 算出前缀和
        arr[i] += arr[i - 1];
    }

    // 计数
    long long cnt;
    yu[0] = 1;
    for (int i = 1; i <= n; i++) {
        cnt += yu[arr[i] % k];
        yu[arr[i] % k]++;
    }

    printf("%lld\n", cnt);

    return 0;
}