#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

const int N = 1e5 + 10;
int w[N], m[N];
int T;

bool cmp(int a, int b) { return a > b; }
int main() {
    scanf("%d", &T);
    int n;
    while (T--) {
        scanf("%d", &n);
        memset(w, 0, sizeof w);
        memset(m, 0, sizeof m);
        for (int i = 0; i < n; i++) scanf("%d", &w[i]);
        for (int i = 0; i < n; i++) scanf("%d", &m[i]);
        sort(w, w + n);
        sort(m, m + n, cmp);
        int res = 0;
        for (int i = 0; i < n; i++) res += w[i] * m[i];
        printf("%d\n", res);
    }
    return 0;
}
