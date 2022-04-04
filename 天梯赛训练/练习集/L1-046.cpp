#include <iostream>
using namespace std;
// 还是来自柳神的代码 https://www.liuchuo.net/archives/5076
int main() {
    int n, ans = 1, cnt = 1;
    cin >> n;
    while (ans < n) {
        ans = ans * 10 + 1;
        cnt++;
    }
    while (1) {
        cout << ans / n;
        if (ans % n == 0) break;
        ans = (ans % n) * 10 + 1;
        cnt++;
    }
    cout << ' ' << cnt;
    return 0;
}