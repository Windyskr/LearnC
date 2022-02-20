#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <unordered_map>
#define h first
#define w second
using namespace std;
int n, k;
typedef pair<int, int> PII;
unordered_map<int, PII> cake;
bool splice(int l) {
    // 要k块,num 表示现在能切几块。
    int num = 0;
    for (int i = 0; i < n; i++) {
        int x = (cake[i].h / l) * (cake[i].w / l);
        num += x;
    }
    if (num >= k)
        return true;
    else
        return false;
}

int main() {
    // n 是蛋糕数量，k是要切成多少份一样的
    cin >> n >> k;
    // 输入蛋糕,H W
    for (int i = 0; i < n; i++) cin >> cake[i].h >> cake[i].w;
    int l = 1, r = 1e5;
    while (l < r) {
        int mid = (l + r + 1) >> 1;
        if (splice(mid))
            l = mid;
        else
            r = mid - 1;
    }
    cout << l << endl;
    return 0;
}