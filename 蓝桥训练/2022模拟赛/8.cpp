#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 110;
char a[N][N], b[N][N];
int n, m;
int c, d;

bool check(int x, int y) {
    for (int i = 0; i < c; i++)
        for (int j = 0; j < d; j++) {
            // 一旦出界立即报错
            if (x + i > n || y + j > m) return false;
            // 如果插不进去也报错
            if (b[i][j] == '1' && a[x + i][y + j] == '0') return false;
        }
    return true;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> c >> d;
    for (int i = 0; i < c; i++) cin >> b[i];
    // 模拟插入的过程
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= m; j++)
            // 选择插入的位置
            if (check(i, j)) {
                cout << i + 1 << ' ' << j + 1 << endl;
                return 0;
            }

    cout << "NO" << endl;
    return 0;
}