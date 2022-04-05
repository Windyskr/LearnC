#pragma GCC optimize(2)
#include <algorithm>
#include <cstring>
#include <iostream>
#include <map>
using namespace std;
int n, k;
map<string, int> m;
int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        string id;
        int mile = 0;
        cin >> id >> mile;
        if (mile < k) mile = k;
        m[id] += mile;
    }
    cin >> n;
    for (int i = 0; i < n; i++) {
        string id;
        cin >> id;
        if (m.count(id) != 0)
            cout << m[id] << endl;
        else
            cout << "No Info" << endl;
    }
    return 0;
}