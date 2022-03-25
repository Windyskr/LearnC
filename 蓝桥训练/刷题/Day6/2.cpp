#include <iostream>
using namespace std;
typedef long long LL;
LL res;
bool prime[3000];

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % 2 == 0) return false;
    }
    return true;
}

int main() {
    // 获得质数
    for (int i = 1; i < 2019; i++)
        if (isPrime(i)) prime[i] = true;
    // 暴力枚举
    for (LL op = 0; op < 1 << 2019; op++) {
        int sum = 0;
        for (int i = 0; i < 2019; i++) {
            if (prime[i] && op >> i & 1) sum += i;
        }
        if (sum == 2019) res++;
    }

    cout << res << endl;
    return 0;
}