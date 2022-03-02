#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

typedef long long ll;
const int N = 1000010;
int n;
// 存的是数字
int c[N];
// 树状树组
int tr[N];
// 这是每个数字的次数
int sum[N];
ll res;

int lowbit(int x) { return x & -x; }

void add(int x, int v) {
    for (int i = x; i < N; i += lowbit(i)) tr[i] += v;
}

int query(int x) {
    int res = 0;
    for (int i = x; i; i -= lowbit(i)) res += tr[i];
    return res;
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &c[i]), c[i]++;

    for (int i = 1; i <= n; i++) {
        // 把树状树组的值当作出现的次数来考虑
        sum[i] = query(N - 1) - query(c[i]);
        // 再加进去,注意这里的值是 1
        add(c[i], 1);
    }

    // 记得把数字清空
    memset(tr, 0, sizeof(tr));

    for (int i = n; i >= 1; i--) {
        // 把树状树组的值当作出现的次数来考虑
        sum[i] += query(c[i] - 1);
        // 再加进去,注意这里的值是 1
        add(c[i], 1);
    }

    for (int i = 1; i <= n; i++) res += (ll)sum[i] * (sum[i] + 1) / 2;

    printf("%lld", res);
    return 0;
}