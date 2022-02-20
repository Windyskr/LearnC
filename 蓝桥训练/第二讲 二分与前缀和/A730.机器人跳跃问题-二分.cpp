#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 100010;
int h[N];
int n;

bool check(int e) {
    for (int i = 1; i <= n; i++) {
        e = e * 2 - h[i];
        // 这是用来
        if (e >= 1e5) return true;
        if (e < 0) return false;
    }
    return true;
}

int main() {
    cin >> n;
    // 能量值
    for (int i = 1; i <= n; i++) scanf("%d", &h[i]);
    int l = 0, r = N;
    while (l < r) {
        int mid = (l + r) >> 1;
        if (check(mid))
            r = mid;
        else
            l = mid + 1;
    }
    // 上取整
    cout << l << endl;
    return 0;
}