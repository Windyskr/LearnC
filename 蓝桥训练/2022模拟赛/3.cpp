// 15
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
int res = 0x3f3f3f3f;
int cnt = 0;

void dfs(int u) {
    if (u == 1) {
        if (cnt < res) res = cnt, cout << res << endl;
    } else {
        if (u % 2 == 0) {
            int now = cnt;
            cnt++;
            dfs(u / 2);
            cnt = now;
            cnt++;
            dfs(u + 1);
            cnt = now;
            cnt++;
            dfs(u - 1);
            cnt = now;
            cnt++;
        } else {
            int now = cnt;
            cnt++;
            dfs(u + 1);
            cnt = now;
            cnt++;
            dfs(u - 1);
        }
    }
}

int main() {
    dfs(2021);
    return 0;
}