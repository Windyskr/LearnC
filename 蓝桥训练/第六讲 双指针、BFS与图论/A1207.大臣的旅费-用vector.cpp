#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

const int N = 1e5 + 10;
// 可到达的 id 和 长度
struct Node {
    int id, w;
};
// 对每一 id 开一个vector
vector<Node> road[N];
int dist[N];

void dfs(int u, int father, int distance) {
    dist[u] = distance;

    for (auto i : road[u])
        if (i.id != father) dfs(i.id, u, distance + i.w);
}

int main() {
    int n;
    scanf("%d", &n);
    // 输入开始
    for (int i = 0; i < n - 1; i++) {
        int p, q, d;
        scanf("%d%d%d", &p, &q, &d);
        road[p].push_back({q, d});
        road[q].push_back({p, d});
    }
    // 先从 1 节点进行，没有任何点下去，所以传 -1
    dfs(1, -1, 0);

    // 找最大
    int dmax = 1;
    for (int i = 1; i <= n; i++)
        if (dist[i] > dist[dmax]) dmax = i;

    // 再搜索一次
    dfs(dmax, -1, 0);

    for (int i = 1; i <= n; i++)
        if (dist[i] > dist[dmax]) dmax = i;

    int s = dist[dmax];

    printf("%lld\n", s * 10 + s * (s + 1ll) / 2);

    return 0;
}