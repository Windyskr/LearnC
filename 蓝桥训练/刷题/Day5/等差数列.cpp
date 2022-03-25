#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

const int N = 1e5 + 10;
int a[N];
// 0 和另一个数的最大公约数都是另一个数
int d = 0;

// 欧几里得算法求最大公约数，这个需要背诵
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    sort(a, a + n);

    if (a[0] == a[n - 1]) {
        // 如果首尾相同的
        printf("%d", n);
    } else {
        // 否则就求他们的最小公倍数
        for (int i = 0; i < n - 1; i++) d = gcd(d, a[i + 1] - a[i]);
        // cout << d << endl;
        // 求队列
        cout << ((a[n - 1] - a[0]) / d) + 1 << endl;
    }

    return 0;
}