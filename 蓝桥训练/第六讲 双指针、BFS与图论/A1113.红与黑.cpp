#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

const int N = 25;
int W, H;

char m[N][N];
bool st[N][N];

int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1};

int dfs(int sx, int sy) {
    int cnt = 1;

    st[sx][sy] = true;

    for (int i = 0; i < 4; i++) {
        int a = sx + dx[i], b = sy + dy[i];
        // 如果越界
        if (a < 0 || a >= H || b < 0 || b >= W) continue;
        // 不是红色的
        if (m[a][b] != '#') continue;
        // 是否经过
        if (st[a][b]) continue;

        cnt += dfs(a, b);
    }

    return cnt;
}

int main() {
    int sx, sy;
    while ((cin >> W >> H), W || H) {
        // 清空数据
        memset(m, 0, sizeof m);
        for (int i = 0; i < H; i++) {
            cin >> m[i];
            for (int j = 0; j < W; j++) {
                if (m[i][j] == '@') sx = i, sy = j;
            }
        }
        // 清空状态
        memset(st, 0, sizeof st);

        cout << dfs(sx, sy) << endl;
        return 0;
    }
}