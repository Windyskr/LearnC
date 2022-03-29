#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 10010;

typedef long long LL;

bool cmp(LL a, LL b) { return a > b; }
LL n;
LL a[N], b[N];
LL ans;
int main() {
    scanf("%lld", &n);
    for (int i = 0; i < n; i++) scanf("%lld", &a[i]);
    for (int i = 0; i < n; i++) scanf("%lld", &b[i]);
    sort(a, a + n);
    sort(b, b + n, cmp);
    for (int i = 0; i < n; i++) ans += abs(a[i] - b[i]);
    printf("%lld\n", ans);
    return 0;
}