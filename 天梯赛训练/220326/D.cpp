#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 1e9 + 10;
typedef long long LL;
int mod = 1e9 + 10;
int n, k;
LL a[N], s[N];

int main() {
    // 第 n 项，系数是 k
    cin >> n >> k;
    a[0] = 1;
    s[0] = 1;
    // 前缀和
    for (int i = 1; i < 1e9; i++) {
        a[i] = 3 * a[i - 1];
        s[i] = s[i - 1] + a[i];
    }
    int cnt = 1;
    a[0] = 1;
    // 循环次方
    for (int i = 1; i < 1e9; i++) {
        // 循环数字
        for (int j = 0; j < i; j++) {
            a[cnt] = s[i] - s[i - 1 - j];
            if (cnt == n) {
                cout << a[cnt] << endl;
                return 0;
            }
            cnt++;
        }
    }

    return 0;
}