#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

bool check(int a, int b, int c, int d) {
    int arr[5] = {a, b, c, d};
    for (int op = 1; op < (1 << 4) - 1; op++) {
        for (int i = 0; i < 4; i++) {
            // 分成两块
            int s[4], uns[4];
            int n = 0, m = 0;
            // 表示选
            if (op >> i & 1)
                s[n++] = arr[i];
            else
                uns[m++] = arr[i];
            // 求是否符合要求
            for (int e = 0; s[e] != 0; e++)
                for (int r = 0; uns[r] != 0; r++) {
                }
        }
    }
    return true;
}

int main() {
    int cnt = 0;

    for (int i = 1; i < 10; i++)
        for (int j = i + 1; j < 10; j++)
            for (int k = j + 1; k < 10; k++)
                for (int l = k + 1; l < 10; l++)
                    if (check(i, j, k, l)) cnt++;

    cout << cnt << endl;
    return 0;
}