#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 5;
char init[N][N], backup[N][N];  // 横着是 i，竖着是 j
int leastpath[20];
void tap(int n) {
    int i = n % 4;
    int j = n / 4;
    for (int x = 0; x < 4; x++) {
        init[j][x] == '+' ? init[j][x] = '-' : init[j][x] = '+';
        init[x][i] == '+' ? init[x][i] = '-' : init[x][i] = '+';
    }
    init[j][i] == '+' ? init[j][i] = '-' : init[j][i] = '+';
}

int main() {
    for (int i = 0; i < 4; i++) {
        cin >> init[i];
    }

    int resmin = 10000;
    // 2^16=65536,每一种代表一个情况
    for (int op = 0; op < 1 << 16; op++) {
        memcpy(backup, init, sizeof(init));
        int path[20];
        int step = 0;
        for (int l = 0; l < 16; l++) {
            if (op >> l & 1) {
                tap(l);
                path[step++] = l;
                // step++;
            }  // 看看动谁
        }

        bool isopen = true;
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (init[i][j] == '+') {
                    isopen = false;
                    break;
                }
            }
        }
        if (isopen && (step < resmin)) {
            resmin = step;
            memcpy(leastpath, path, sizeof(path));
            cout << op << endl;
        }

        memcpy(init, backup, sizeof(init));
    }

    cout << resmin << endl;
    // 输出步数
    for (int x = 0; x < resmin; x++) {
        int i = leastpath[x] % 4;
        int j = leastpath[x] / 4;
        cout << j + 1 << " " << i + 1 << endl;
    }

    return 0;
}