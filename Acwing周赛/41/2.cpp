#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 100010;
int pl[N];
int pr[N];
int main() {
    int m, n, q;
    cin >> m >> n >> q;
    string s, t;
    cin >> s;
    cin >> t;
    int idx = 0;
    // t 在 s 中出现的次数
    int cutted = 0;
    while (s.size() && s.find(t) != -1) {
        // 记录左位置，右位置
        int l = s.find(t);
        int r = l + t.size();
        // 真实的位置
        int tl = cutted + l;
        int tr = cutted + r;
        pl[idx] = tl;
        pr[idx++] = tr - 1;
        // cutted
        cutted += s.find(t) + 1;
        // s
        s = s.substr(r);
    }
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        // 查找
        int cnt = 0;
        for (int j = 0; j < idx; j++)
            if (pl[j] >= l && pr[j] <= r) cnt++;
        cout << cnt << endl;
    }
    return 0;
}