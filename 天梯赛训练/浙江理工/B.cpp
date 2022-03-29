#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;

typedef long long LL;
const int N = 500;
LL n, x, y;
LL a[N];

int main() {
    cin >> n >> x >> y;
    for (int i = 0; i < n; i++) scanf("%lld", &a[i]);
    for (int i = 0; i < n; i++) printf("%lld\n", a[i] * y / x);
    return 0;
}