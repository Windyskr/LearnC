#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

const int N = 100010;

int n, m;
int w[N];

struct Node {
    int l, r;
    int sum;
} tr[N * 4];

// 这个父节点是两个字节点的和
void pushup(int u) { tr[u].sum = tr[u << 1].sum + tr[u << 1 | 1].sum; }

// 建立线段树
void build(int u, int l, int r) {
    // 如果只有一个数字的话，那就是数字
    if (l == r)
        tr[u] = {l, r, w[r]};
    else {
        // 如果范围大于两个，那就是递归算出左节点和右节点
        tr[u] = {l, r};
        int mid = l + r >> 1;
        build(u << 1, l, mid), build(u << 1 | 1, mid + 1, r);
        // 最后加起来
        pushup(u);
    }
}

int query(int u, int l, int r) {
    // 如果是这个范围了，那就传上去
    if (tr[u].l >= l && tr[u].r <= r) return tr[u].sum;
    int mid = tr[u].l + tr[u].r >> 1;
    int sum = 0;
    // 如果不是，那就左右看看
    if (l <= mid) sum += query(u << 1, l, r);
    if (r > mid) sum += query(u << 1 | 1, l, r);
    return sum;
}

// 修改函数
void modify(int u, int x, int v) {
    if (tr[u].l == tr[u].r)
        tr[u].sum += v;
    else {
        int mid = tr[u].l + tr[u].r >> 1;
        if (x <= mid)
            modify(u << 1, x, v);
        else
            modify(u << 1 | 1, x, v);
        pushup(u);
    }
}

int main() {
    // 数的个数 和 询问的次数
    scanf("%d%d", &n, &m);
    // 把数字输入
    for (int i = 1; i <= n; i++) scanf("%d", &w[i]);
    // 建立一下，左 1 右 1，sum = n
    build(1, 1, n);

    int k, a, b;
    // 开始询问
    while (m--) {
        // 输入
        scanf("%d%d%d", &k, &a, &b);

        if (k == 0)
            // 求子序列的和
            printf("%d\n", query(1, a, b));
        else
            // 把第 a 个数加 b
            modify(1, a, b);
    }

    return 0;
}