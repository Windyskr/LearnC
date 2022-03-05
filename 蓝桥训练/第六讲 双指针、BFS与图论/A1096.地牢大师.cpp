#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
using namespace std;

const int N = 110;
struct Node {
    int x, y, z;
};
// 层数 行数 列数
int l, r, c;
char m[N][N][N];
int dist[N][N][N];

// 偏移量
int dx[6] = {1, -1, 0, 0, 0, 0};
int dy[6] = {0, 0, 1, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};

// 传入开始和结束
int bfs(Node start, Node final) {
    // 新建一个队列
    queue<Node> q;
    memset(dist, -1, sizeof dist);
    // 它自己的路程是 0
    dist[start.x][start.y][start.z] = 0;
    // 把 start 推入队列
    q.push(start);
    // 开始循环
    while (q.size()) {
        auto t = q.front();
        q.pop();
        for (int i = 0; i < 6; i++) {
            // 偏移
            int x = t.x + dx[i];
            int y = t.y + dy[i];
            int z = t.z + dz[i];
            // 出界的判断
            if (x < 0 || x >= l || y < 0 || y >= r || z < 0 || z >= c)
                continue;  // 出界
            // 如果撞墙
            if (m[x][y][z] == '#') continue;
            // 如果走过
            if (dist[x][y][z] != -1) continue;
            dist[x][y][z] = dist[t.x][t.y][t.z] + 1;
            // if (x == final.x && y == final.y && z == final.z)
            //     return dist[x][y][z];

            if (m[x][y][z] == 'E') return dist[x][y][z];
            q.push({x, y, z});
        }
    }
    return -1;
}
int main() {
    // 输入
    while (scanf("%d%d%d", &l, &r, &c), l || r || c) {
        Node start, final;
        for (int i = 0; i < l; i++)
            for (int j = 0; j < r; j++) {
                // 一次输入一行
                scanf("%s", m[i][j]);
                // 查找开始和结束
                for (int k = 0; k < c; k++) {
                    char c = m[i][j][k];
                    if (c == 'S')
                        start = {i, j, k};
                    else if (c == 'E')
                        final = {i, j, k};
                }
            }
        int distance = bfs(start, final);
        if (distance == -1)
            puts("Trapped!");
        else
            printf("Escaped in %d minute(s).\n", distance);
    }
}