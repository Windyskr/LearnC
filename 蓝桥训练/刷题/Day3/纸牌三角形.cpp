#include <iostream>
using namespace std;

const int MAX = 7 + 8 + 9 + 10;
bool used[10];
// 这个是单词
int w[10];
// 如果 cnt
int cnt;

// 现在在选第几位
void dfs(int u) {
    // 现在选的如果超过第 9 位
    if (u > 9) {
        //  那就判断是否符合条件
        int f1 = w[1] + w[2] + w[3] + w[4];
        int f2 = w[4] + w[5] + w[6] + w[7];
        int f3 = w[7] + w[8] + w[9] + w[1];
        // 如果符合就加一
        if (f1 == f2 && f2 == f3) cnt++;
        return;
    } else {
        // 如果没过，就循环选择这个位数上的数字
        for (int i = 1; i <= 9; i++)
            // 如果这个数字没用过
            if (!used[i]) {
                // 选择它
                used[i] = true;
                w[u] = i;
                dfs(u + 1);
                // 选完了记得还原现场
                used[i] = false;
                w[u] = 0;
            }
    }
}

int main() {
    dfs(1);
    cout << cnt / 6 << endl;
    return 0;
}