#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#define x first
#define y second

using namespace std;

typedef pair<int, int> PII;

const int N = 210;

int r, c;

char mg[N][N];
// 记录步数的数列
int dist[N][N];

int bfs(PII start, PII end) {
    // 新建一个队列
    queue<PII> q;
    // 先把这个 dist 清空，因为有多组
    memset(dist, -1, sizeof dist);
    // 它自己的路程是 0
    dist[start.x][start.y] = 0;
    // 把 start 推入队列
    q.push(start);
    // 偏移量
    int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
    // 开始循环
    while (q.size()) {
        auto t = q.front();
        q.pop();
        // 把与队列第一项有关的找出来
        for (int i = 0; i < 4; i++) {
            // 找的是上下左右四个方向的
            int x = t.x + dx[i], y = t.y + dy[i];
            // 出界
            if (x < 0 || x >= r || y < 0 || y >= c) continue;  // 出界
            // 障碍物
            if (mg[x][y] == '#') continue;
            // 再加入之前判重
            if (dist[x][y] != -1) continue;
            // 路程 + 1
            dist[x][y] = dist[t.x][t.y] + 1;
            // 如果到了，就输出
            if (end == make_pair(x, y)) return dist[x][y];
            // 把这一项推进去
            q.push({x, y});
        }
    }

    return -1;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        cin >> r >> c;
        // 要用这样输入，老老实实从 0 开始
        for (int i = 0; i < r; i++) cin >> mg[i];

        PII start, end;
        // 找开始点和结束点
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++) {
                if (mg[i][j] == 'S') start = {i, j};
                if (mg[i][j] == 'E') end = {i, j};
            }
        // 开始 bfs 搜索
        int res = bfs(start, end);

        if (res == -1)
            cout << "oop!" << endl;
        else
            cout << res << endl;
    }

    return 0;
}