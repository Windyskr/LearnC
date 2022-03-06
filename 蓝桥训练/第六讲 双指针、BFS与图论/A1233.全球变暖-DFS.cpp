#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

const int N = 1010;
int n;
char m[N][N];
bool visited[N][N];
int dao;
bool flag;
int still;
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

void dfs(int sx, int sy) {
    if (sx < 0 || sx >= n || sy < 0 || sy > n || visited[sx][sy]) return;
    visited[sx][sy] = true;

    if (m[sx][sy + 1] == '#' && m[sx][sy - 1] == '#' && m[sx + 1][sy] == '#' &&
        m[sx - 1][sy] == '#')
        flag = true;

    for (int i = 0; i < 4; i++) {
        // 遍历这个岛
        if (m[sx + dx[i]][sy + dy[i]] == '#') dfs(sx + dx[i], sy + dy[i]);
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m[i];
    }
    for (int i = 1; i < n; i++)
        for (int j = 1; j < n; j++)
        // 如果是岛，就dfs
        {
            if (m[i][j] == '#' && !visited[i][j]) {
                flag = false;
                dfs(i, j);
                dao++;
                if (flag) still++;
            }
        }

    cout << dao - still << endl;
    return 0;
}