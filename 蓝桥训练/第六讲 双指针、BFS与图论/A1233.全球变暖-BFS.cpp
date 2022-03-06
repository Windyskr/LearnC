#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#define x first
#define y second
using namespace std;

typedef pair<int, int> PII;

const int N = 1010;

int n;
char m[N][N];
bool visited[N][N];
int cnt = 0;

int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};

void bfs(int sx, int sy, int &total, int &bound) {
    queue<PII> q;
    q.push({sx, sy});
    visited[sx][sy] = true;
    while (!q.empty()) {
        PII t = q.front();
        q.pop();
        total++;
        bool is_bound = false;
        // 看看四周
        for (int i = 0; i < 4; i++) {
            int x = t.x + dx[i], y = t.y + dy[i];
            // 如果越界
            if (x < 0 || x >= n || y < 0 || y >= n) {
                continue;
            }
            // 如果已经过了
            if (visited[x][y]) {
                continue;
            }
            // 如果是海洋
            if (m[x][y] == '.') {
                is_bound = true;
                continue;
            }
            // 如果是还是陆地，就加入队列
            q.push({x, y});
            visited[x][y] = true;
        }
        // 如果周围有海洋，就记录会被淹没的块的数量
        if (is_bound) {
            bound++;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            // 如果是岛，就 BFS
            if (m[i][j] == '#' && !visited[i][j]) {
                //这个岛屿所有的块的数量,这个岛屿上周围是海的块的数量
                int total = 0, bound = 0;
                bfs(i, j, total, bound);
                if (total == bound) {
                    // 当前的块中所有的格子==周围有海洋的数量,就会被淹没
                    cnt++;
                }
            }
        }
    cout << cnt << endl;
    return 0;
}