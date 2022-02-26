#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

int w, m, n;
int mx, my, nx, ny;
int main() {
    cin >> w >> m >> n;
    // 1  2  3   4  5  6
    // 12 11 10  9  8  7
    // 13 14 15 16 17 18

    // 这里的算法需要记住
    mx = (m - 1 + w) / w;
    if (mx % 2 == 1) {
        my = m - (mx - 1) * w;
    } else {
        my = w - (m - (mx - 1) * w) + 1;
    }

    nx = (n - 1 + w) / w;
    if (nx % 2 == 1) {
        ny = n - (nx - 1) * w;
    } else {
        ny = w - (n - (nx - 1) * w) + 1;
    }

    cout << mx << " " << my << " " << nx << " " << ny << endl;

    // 记住这里的取绝对值
    int res = abs(mx - nx) + abs(my - ny);
    cout << res << endl;

    return 0;
}