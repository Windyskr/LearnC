// L2-031 深入虎穴 (25 分)
#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
int N, K, D, one, vis[100001];
vector<int> Edge[100001];
queue<int> Q;
int main() {
    cin >> N;
    // 每一扇门背后或者是一个房间，
    // 或者又有很多条路，
    // 同样是每条路通向一扇门……
    // 他们记下了每扇门的编号
    // 以及这扇门背后的每一条通路所到达的门的编号
    for (int i = 1; i <= N; ++i) {
        cin >> K;
        while (K--) {
            cin >> D;
            // 增加两条边
            Edge[D].push_back(i);
            Edge[i].push_back(D);
        }
    }
    Q.push(1);
    vis[1] = 1;
    // 因为要求的是最大距离，所以使用 bfs
    while (!Q.empty()) {
        one = Q.front();
        Q.pop();
        for (auto v : Edge[one]) {
            if (vis[v]) continue;
            vis[v] = 1;
            Q.push(v);
        }
    }
    cout << one;
    return 0;
}