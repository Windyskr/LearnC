#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

int n;
const int N = 6;  // 字符串，/0
char ls[N][N];  //定义一个5 x 5 的表格 12345，只有 char 才能这样输入
char backup[N][N];
int dx[5] = {-1, 0, 1, 0, 0}, dy[5] = {0, 1, 0, -1, 0};

// 点击函数
void tap(int x, int y) {
    for (int i = 0; i < 5; i++) {
        // ls[x + t[i][0]][y + t[i][1]] = !ls[x + t[i][0]][y + t[i][1]];
        // 这样是错误的
        int a = x + dx[i], b = y + dy[i];
        if (a < 0 || a >= 5 || b < 0 || b >= 5)
            continue;  // 在边界外，直接忽略即可
        ls[a][b] ^= 1;
    }
    return;
}

int main() {
    cin >> n;
    while (n--) {
        // 先输入进来
        for (int i = 0; i < 5; i++) cin >> ls[i];
        int res = 10;

        // 再看看第一排的编码
        for (int op = 0; op < 32; op++) {
            memcpy(backup, ls, sizeof(ls));
            int step = 0;
            // 这是对应第一层，有 2^5种情况
            // op 向右偏移 i 位， & 与（两个都是 1 才是 1 否则为 0 ）
            // 1 的二进制前面都是 0，最后一位才是 1，所以 xxx a ^ 000 1 =a
            // 0 1 也就对应着灯的开闭情况
            for (int i = 0; i < 5; i++) {
                if (op >> i & 1) {
                    step++;
                    tap(0, i);
                }
            }

            // 循环前 4 层
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 5; j++)
                    // 看看横着的位置灯是不是灭的
                    // 如果是，就点它的下一次
                    if (ls[i][j] == '0') {
                        step++;
                        tap(i + 1, j);
                    }
            }

            bool dark = false;
            // 看看最后一层是不是亮的
            for (int i = 0; i < 5; i++)
                if (ls[4][i] == '0') {
                    dark = true;
                    break;
                }
            if (!dark) res = min(res, step);
            memcpy(ls, backup, sizeof(ls));
            // 超过 6 步了，就返回 -1
        }
        if (res > 6) res = -1;
        cout << res << endl;
    }
}