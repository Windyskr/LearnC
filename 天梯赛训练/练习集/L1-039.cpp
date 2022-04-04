#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 110;
int n;
string s;
char c[N][N];

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    getline(cin, s);
    getline(cin, s);
    // 看看有多少行，要上取整
    int num = ceil(1.0 * s.size() / n);
    int cnt = 0;
    for (int i = num; i > 0; i--)
        for (int j = 1; j <= n; j++) {
            if (cnt >= s.size())
                c[j][i] = ' ';
            else
                c[j][i] = s[cnt++];
        }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= num; j++) {
            cout << c[i][j];
        }
        cout << endl;
    }

    return 0;
}