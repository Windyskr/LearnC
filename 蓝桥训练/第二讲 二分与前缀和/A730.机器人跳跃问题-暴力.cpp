#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 100010;
int h[10010];

int main() {
    int n, inite, en;
    cin >> n;
    // 能量值
    for (int i = 1; i <= n; i++) scanf("%d", &h[i]);
    for (int en = 1; en < N; en++) {
        int i, tmp = en;
        for (i = 0; i < n; i++) {
            if (h[i + 1] > en)
                en = en - (h[i + 1] - en);
            else
                en = en + (en - h[i + 1]);
            if (en < 0) break;
        }
        en = tmp;  // 恢复
        if (i == n) {
            inite = en;
            break;
        }
    }
    // 上取整
    cout << inite << endl;
    return 0;
}