#include <algorithm>
#include <climits>
#include <cstdio>
#include <iostream>
using namespace std;

const int N = 1e5 + 10;
// 这是还是小了，所以要用 climits 里的 INT_MIN
const int INF = 0x3f3f3f3f;
int arr[N];
int n, m;

struct Node {
    int l, r, max;
} tr[4 * N];
// 别忘记是 4 * N

// 查询 max
void pushup(int u) { tr[u].max = max(tr[u << 1].max, tr[u << 1 | 1].max); }

// 建立 max 树
void build(int u, int l, int r) {
    if (l == r)
        tr[u] = {l, r, arr[r]};
    else {
        tr[u] = {l, r};
        int mid = l + r >> 1;
        build(u << 1, l, mid);
        build(u << 1 | 1, mid + 1, r);
        pushup(u);
    }
}

int query(int u, int l, int r) {
    if (l <= tr[u].l && tr[u].r <= r) return tr[u].max;
    int mid = tr[u].l + tr[u].r >> 1;
    int maxl = INT_MIN;
    if (l <= mid) maxl = query(u << 1, l, r);
    if (r > mid) maxl = max(maxl, query(u << 1 | 1, l, r));
    return maxl;
}

int main() {
    scanf("%d%d", &n, &m);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }

    build(1, 1, n);

    while (m--) {
        int ql, qr;
        scanf("%d%d", &ql, &qr);
        // 左右别反了
        printf("%d\n", query(1, ql, qr));
    }

    return 0;
}