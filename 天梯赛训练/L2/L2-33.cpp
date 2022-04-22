// L2-033 简单计算器 (25 分)
#pragma GCC optimize(2)
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 110;
int n;
int a;
char b;
stack<int> sn;
stack<char> sop;

signed main() {
    cin >> n;

    for (int i = 0; i < n; i++) cin >> a, sn.push(a);
    for (int i = 0; i < n - 1; i++) cin >> b, sop.push(b);

    for (int i = 1; i < n; i++) {
        int n1 = sn.top();
        sn.pop();
        int n2 = sn.top();
        sn.pop();
        int op = sop.top();
        sop.pop();
        if (op == '+') {
            sn.push(n2 + n1);
        } else if (op == '-') {
            sn.push(n2 - n1);
        } else if (op == '*') {
            sn.push(n2 * n1);
        } else if (op == '/') {
            if (n1 == 0) {
                cout << "ERROR: " << n2 << "/0" << endl;
                return 0;
            }
            sn.push(n2 / n1);
        }
    }
    cout << sn.top() << endl;
    return 0;
}