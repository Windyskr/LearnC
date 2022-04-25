#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e9 + 10;
int main() {
    int T, power;
    cin >> T;
    while (T--) {
        // 体力值
        cin >> power;
        ll ans = 0;
        ans++, power--;
        while (power > 1) ans = (2 * ans + 1) % mod, power -= 2;
        if (power == 1) ans++;
        cout << ans << endl;
    }
    return 0;
}