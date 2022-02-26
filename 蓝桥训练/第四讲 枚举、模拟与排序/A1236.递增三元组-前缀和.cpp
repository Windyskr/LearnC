#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

typedef long long LL;

const int N = 100010;

int n;
int a[N], b[N], c[N];
int as[N];  // as[i]表示在A[]中有多少个数小于b[i]
int cs[N];  // cs[i]表示在C[]中有多少个数大于b[i]
int cnt[N], s[N];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]), a[i]++;
    for (int i = 0; i < n; i++) scanf("%d", &b[i]), b[i]++;
    for (int i = 0; i < n; i++) scanf("%d", &c[i]), c[i]++;

    // 求as[]
    for (int i = 0; i < n; i++) cnt[a[i]]++;
    for (int i = 1; i < N; i++) s[i] = s[i - 1] + cnt[i];  // 求cnt[]的前缀和
    for (int i = 0; i < n; i++) as[i] = s[b[i] - 1];

    // 求cs[]
    memset(cnt, 0, sizeof cnt);
    memset(s, 0, sizeof s);
    for (int i = 0; i < n; i++) cnt[c[i]]++;
    for (int i = 1; i < N; i++) s[i] = s[i - 1] + cnt[i];
    for (int i = 0; i < n; i++) cs[i] = s[N - 1] - s[b[i]];

    // 枚举每个b[i]
    LL res = 0;
    for (int i = 0; i < n; i++) res += (LL)as[i] * cs[i];

    cout << res << endl;

    return 0;
}