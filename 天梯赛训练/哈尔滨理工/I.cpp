#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

const int N = 310;
int t;
int a[N], b[N];

int main() {
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        memset(a, 0, sizeof a);
        memset(b, 0, sizeof b);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        // a 也是乱序的
        sort(a + 1, a + 1 + n);
        for (int i = 1; i <= n; i++) {
            b[i] = a[i] - a[i - 1];
        }
        sort(b + 1, b + n + 1);
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            b[i] = b[i - 1] + b[i];
            ans += b[i];
        }
        cout << ans << endl;
    }
    return 0;
}