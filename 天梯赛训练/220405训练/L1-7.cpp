#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
int n;
int res = -1;
int cnt;
int rs, re;
int main() {
    // ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    int ts;
    int a0 = -1, a1, num = 0;
    for (int i = 0; i < n; i++) {
        cin >> a1;
        // 如果是连续的
        if (a0 + 1 == a1) {
            a0 = a1, num++;
        } else {
            // 如果不连续，就判断是不是大了
            if (num > res) rs = ts, res = num;
            if (num >= 10) cnt++;
            ts = a1;
            a0 = a1;
            num = 1;
        }
    }
    if (num > res) rs = ts, res = num;
    if (num >= 10) cnt++;
    cout << cnt << endl;
    for (int i = 0; i < res; i++) {
        cout << rs + i;
        if (i != res - 1) cout << ' ';
    }
    return 0;
}