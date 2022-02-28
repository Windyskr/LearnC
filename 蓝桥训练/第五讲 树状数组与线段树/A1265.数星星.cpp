#include <iostream>
using namespace std;

const int N = 32010;
int n;
int st[N];
int level[N];

int lowbit(int x) { return x & -x; }

// void add(int x, int v) {
//     for (int i = x; i <= N; i += lowbit(i)) st[i] += v;
// }

// 新加，这个时候v = 1
void add(int x) {
    for (int i = x; i <= N; i += lowbit(i)) st[i]++;
}

// 询问
int query(int x) {
    int res = 0;
    // 前开后闭，所以这样写
    for (int i = x; i; i -= lowbit(i)) res += st[i];
    return res;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        // 因为 y 是从小到大输入的，所以 y 的值就没有必要
        cin >> x >> y;
        // 令 x 是从 1 开始
        x++;
        // x 的等级数量加 1
        level[query(x)]++;
        // 把 x 加上去
        add(x);
    }

    for (int i = 0; i < n; i++) cout << level[i] << endl;

    return 0;
}