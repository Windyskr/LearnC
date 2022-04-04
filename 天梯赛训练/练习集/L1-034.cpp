#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <map>
using namespace std;
int n, m;
int maxn = -0x3f3f3f3f, maxid = -0x3f3f3f3f;
map<int, int> ma;

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        int id;
        for (int j = 0; j < m; j++) {
            cin >> id;
            ma[id]++;
            if ((ma[id] > maxn) || (ma[id] == maxn && id > maxid)) {
                maxn = ma[id];
                maxid = id;
            }
        }
    }

    cout << maxid << ' ' << maxn << endl;

    return 0;
}