#include <algorithm>
#include <iostream>
using namespace std;
const int N = 110;

int w[N][N];
int f[N][N];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int r, c;
        cin >> r >> c;
        for (int i = 1; i <= r; i++)
            for (int j = 1; j <= c; j++) cin >> w[i][j];

        for (int i = 1; i <= r; i++)
            for (int j = 1; j <= c; j++)
                f[i][j] = max(f[i - 1][j], f[i][j - 1]) + w[i][j];

        cout << f[r][c] << endl;
    }
    return 0;
}