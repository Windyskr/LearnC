#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#define x first
#define y second
using namespace std;

const int N = 110;
// 偏移量
int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
// 队列
typedef pair<int, int> PII;
queue<PII> q;
bool watered[N][N];

int n, m, t, k;

int cnt;
void water() {
    // 第一个元素
    auto sign = q.front();
    q.push(q.front());
    do {
        auto t = q.front();
        for (int i = 0; i < 4; i++) {
            int x = t.x + dx[i];
            int y = t.y + dy[i];
            // 如果越界
            if (x < 0 || x > n || y < 0 || y > m) continue;
            // 如果已经灌溉过了
            if (watered[x][y]) continue;
            // 如果没有
            watered[x][y] = true;
            cnt++;
            q.push({x, y});
        }
        q.pop();
    } while (q.front() != sign);
}

int main() {
    scanf("%d%d%d", &n, &m, &t);
    while (t--) {
        int r, c;
        scanf("%d%d", &r, &c);
        watered[r][c] = true;
        q.push({r, c});
        cnt++;
    }
    scanf("%d", &k);
    // 每一个 k 就是一次灌溉的过程
    while (k--) {
        water();
    }
    printf("%d", cnt);
    return 0;
}