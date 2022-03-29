#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

typedef long long LL;
LL n;
LL res;

int main() {
    cin >> n;
    if (n % 2 == 0) {
        for (LL i = 1; i <= (n / 2); i++) res += (n % i) % 998244353;
        res = 2 * res;
    } else {
        for (LL i = 1; i <= (n - 1) / 2; i++) res += (n % i) % 998244353;
        res = (2 * res) + (n % ((n + 1) / 2));
    }
    cout << res % 998244353 << endl;

    return 0;
}