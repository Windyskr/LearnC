// L2-029 特立独行的幸福 (25 分)
#pragma GCC optimize(2)
#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
// 不是 -1 是存放区间内的独立性
int xf[N];
int a, b;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i <= x / i; i++)
        if (x % i == 0) return false;
    return true;
}

int isXf(int n) {
    int x = n;
    int cnt = 0;
    set<int> s;
    while (x != 1) {
        // 如果已经有值了
        if (xf[x] != -1) {
            cnt += xf[x];
            return cnt;
        }
        // 如果这个已经出现过了
        if (s.count(x) != 0) {
            return -1;
        }
        s.insert(x);
        // 那就计算下一次
        int res = 0;
        while (x) {
            res += (x % 10) * (x % 10);
            x /= 10;
        }
        if (x < a && x > b) cnt++;
        x = res;
    }
    xf[n] = cnt;
    return cnt;
}
int main() {
    memset(xf, -1, sizeof xf);
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        int t = isXf(i);
        if (t == -1) = 1;
    }
    return 0;
}