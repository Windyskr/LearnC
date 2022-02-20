#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>

using namespace std;
const int N = 5e6 + 10;
int n;
int hc[N], hd[N];
int main() {
    cin >> n;
    memset(hc, -1, sizeof(hc));
    for (int c = 0; c * c <= n; c++) {
        for (int d = c; c * c + d * d <= n; d++) {
            int res = c * c + d * d;
            if (hc[res] == -1) hc[res] = c, hd[res] = d;
        }
    }

    for (int a = 0; a * a <= n; a++) {
        for (int b = a; a * a + b * b <= n; b++) {
            int cd = n - a * a - b * b;
            if (hc[cd] != -1) {
                printf("%d %d %d %d\n", a, b, hc[cd], hd[cd]);
                return 0;
            }
        }
    }
    return 0;
}