#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
using namespace std;
#define x first
#define y second
const int N = 101;
typedef pair<int, int> PII;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int mp[N][N];
int d[N][N];
int n;
int m;
int qx, zx, qy, zy;

bool check(int x, int y) {
    if (x < 1 || y < 1 || x > n || y > m) return false;  //越界
    return true;
}

int bfs(int x, int y) {
    queue<PII> q;
    q.push({x, y});
    // vis[x][y]=1;
    d[x][y] = 0;
    while (q.size()) {
        auto t = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            int fx = t.x + dx[i], fy = t.y + dy[i];
            if (!check(fx, fy))
                continue;                   //越界
                                            //	if(vis[fx][fy]) continue;
            if (mp[fx][fy] == 0) continue;  //障碍
            mp[fx][fy] = 0;
            d[fx][fy] = d[t.x][t.y] + 1;  //步数加一
            q.push({fx, fy});
        }
    }
    return d[zx][zy];
}
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mp[i][j];
        }
    }
    memset(d, -1, sizeof(d));
    cin >> qx >> qy >> zx >> zy;

    cout << bfs(qx, qy);
    return 0;
}
