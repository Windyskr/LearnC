#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

const int N = 100010;

int n;
// 可到达的 id 和 长度
struct Edge {
    int id, w;
};
// 对每一 id 开一个vector
vector<Edge> h[N];
// 距离
int dist[N];

void dfs(int u, int father, int distance) {
    dist[u] = distance;

    for (auto node : h[u])
        if (node.id != father) dfs(node.id, u, distance + node.w);
}

int main() {
    scanf("%d", &n);
    // 存储图
    for (int i = 0; i < n - 1; i++) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        h[a].push_back({b, c});
        h[b].push_back({a, c});
    }
    // 先从 1 节点进行，没有任何点下去，所以传 -1
    dfs(1, -1, 0);

    int u = 1;
    for (int i = 1; i <= n; i++)
        if (dist[i] > dist[u]) u = i;

    dfs(u, -1, 0);

    for (int i = 1; i <= n; i++)
        if (dist[i] > dist[u]) u = i;

    int s = dist[u];

    printf("%lld\n", s * 10 + s * (s + 1ll) / 2);

    return 0;
}