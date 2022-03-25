#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
#define x first
#define y second
using namespace std;
typedef pair<int, int> PII;
const int N = 60;
char m[N][N];
bool visited[N][N];
int dist[N][N];

int dx[4] = {0, -1, 1, 0}, dy[4] = {-1, 0, 0, 1};
char dists[4] = {'L', 'D', 'U', 'R'};
vector<char> road;

// 这是找路的 bfs
void bfs_find(int x, int y) {
    queue<PII> q;
    q.push({x, y});
    dist[x][y] = 0;
    while (!q.empty()) {
        auto u = q.front();
        visited[u.x][u.y] = true;
        for (int i = 0; i < 4; i++) {
            int ax = u.x + dx[i], ay = u.y + dy[i];
            if (visited[ax][ay]) continue;
            // 如果越界
            if (ax < 0 || ax > 3 || ay < 0 || ay > 5) continue;
            // 只要不是路，就退出
            if (m[ax][ay] != '0') continue;
            // 再加入之前判重
            if (dist[x][y] != 0) continue;
            // 路
            dist[ax][ay] = dist[u.x][u.y] + 1;
            // 如果到了，就退出
            if (ax == 3 && ay == 5) return;
            q.push({ax, ay});
        }
        q.pop();
    }
    return;
}

// 根据找路得到的dist，从迷宫出口回溯找周围dist - 1的格子，把路径放在vector里
void bfs_road(int x, int y) {
    queue<PII> q;
    q.push({x, y});
    while (!q.empty()) {
        auto u = q.front();
        for (int i = 0; i < 4; i++) {
            // 计算地址
            int x = u.x + dx[i], y = u.y + dy[i];
            // 如果找到了dist-1
            if (dist[x][y] == dist[u.x][u.y] - 1) {
                // 就把这个对应的符号加进去
                road.push_back(dists[i]);
                // 入列
                q.push({x, y});
                // 不用找了，因为旁边肯定只有一个dist - 1的点
                break;
            }
            // 如果到了，就退出
            if (x == 0 && y == 0) return;
        }
        q.pop();
    }
    return;
}

int main() {
    memset(m, -1, sizeof m);
    for (int i = 0; i < 4; i++) cin >> m[i];
    bfs_find(0, 0);
    bfs_road(3, 5);
    for (int i = road.size(); i >= 0; i--) {
        printf("%c", road[i]);
    }
    cout << dist[3][5] << endl;
    return 0;
}