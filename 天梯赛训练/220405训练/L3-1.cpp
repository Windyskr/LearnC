#include <algorithm>
#include <cstring>
#include <iostream>
#include <queue>
using namespace std;
typedef pair<int, int> PII;
const int N = 25;
// 存雷，true 表示有雷
bool mp[N][N];
// 是否已经打开
int st[N][N];
// row col 雷数量
int n, m, k, l;

int bx[] = {-1, -1, -1, 0, 0, 1, 1, 1}, by[] = {-1, 0, 1, -1, 1, -1, 0, 1};
// 算一算八个方向有几个雷
void count(int x, int y) {
    st[x][y] = 0;
    for (int i = 0; i < 8; i++) {
        int nx = x + bx[i], ny = y + by[i];
        if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
        if (mp[nx][ny]) st[x][y]++;
    }
}

int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1};
// bfs 打开周围没雷的格子
void bfs(int x, int y) {
    queue<PII> q;
    q.push({x, y});
    count(x, y);
    while (!q.empty()) {
        int x = q.front().first, y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i], ny = y + dy[i];
            if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
            if (!mp[nx][ny] && st[nx][ny] == -1) {
                count(nx, ny);
                q.push({nx, ny});
            }
        }
    }
}

bool tap(int x, int y) {
    // 越界
    if (x < 0 || x >= m || y < 0 || y >= n) return false;
    // 如果开过了
    if (st[x][y] != -1) return false;
    // 如果这里是雷，那么就是死亡
    if (mp[x][y]) return true;
    // 把旁边点开
    bfs(x, y);
    return false;
}
bool flag = false;
int main() {
    cin >> n >> m >> k >> l;
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        mp[x][y] = true;
    }
    memset(st, -1, sizeof(st));
    for (int i = 0; i < l; i++) {
        int x, y;
        cin >> x >> y;
        if (tap(x, y)) {
            cout << "You lose" << endl;
            flag = true;
            break;
        } else {
            for (int ii = 0; ii < n; ii++) {
                for (int jj = 0; jj < m; jj++) printf("%d ", st[ii][jj]);
                cout << endl;
            }
        }
        if (i != l - 1) cout << endl;
    }
    int cnt = 0;
    if (!flag) {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (st[i][j] == -1) cnt++;
        // cout << cnt << endl;
        if (cnt == k) cout << "You win" << endl;
    }
    return 0;
}