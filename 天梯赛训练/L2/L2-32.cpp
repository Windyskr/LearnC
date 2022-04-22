// L2-032 彩虹瓶 (25 分)
#pragma GCC optimiz(2)
#include <bits/stdc++.h>
using namespace std;
int n, m, k;
int main() {
    cin >> n >> m >> k;
    while (k--) {
        int idx = 1;
        stack<int> s;
        int a;
        for (int i = 0; i < n; i++) {
            cin >> a;
            s.push(a);

            if (s.size() > m + 1) break;

            while (s.size() > 0 && s.top() == idx) {
                idx++;
                s.pop();
            }
        }

        if (s.size() == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}