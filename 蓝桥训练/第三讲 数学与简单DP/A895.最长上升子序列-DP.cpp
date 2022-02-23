#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

typedef long long ll;

const int N = 1010;
int n;
// 数据范围
ll s[N];
int f[N];
// https://www.acwing.com/video/625/
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%lld", &s[i]);

    // 最后一个什么结尾
    for (int i = 1; i <= n; i++) {
        // 第一个是什么开头
        f[i] = 1;
        for (int j = 1; j <= i; j++) {
            // 如果后面的比前面的大
            if (s[i] > s[j]) {
                f[i] = max(f[i], f[j] + 1);
            }
        }
    }

    int res = 0;
    for (int i = 1; i <= n; i++) res = max(res, f[i]);

    cout << res << endl;
    return 0;
}