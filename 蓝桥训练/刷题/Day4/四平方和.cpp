#include <iostream>
#include <unordered_map>
#define x first
#define y second
using namespace std;

typedef pair<int, int> PII;
const int N = 5000000;
int n;
unordered_map<int, PII> m;
int a, b, c, d;

int main() {
    cin >> n;
    // 首先枚举后面两个大的c d

    for (int c = 0; c * c <= n; c++) {
        for (int d = c; c * c + d * d <= n; d++) {
            int res = c * c + d * d;
            m[res] = {c, d};
        }
    }
    // 再枚举前面两个
    for (int a = 0; a * a <= n; a++)
        for (int b = a; a * a + b * b <= n; b++) {
            int cd = n - a * a - b * b;
            if (m.find(cd) != m.end()) {
                cout << a << ' ' << b << ' ' << m[cd].x << ' ' << m[cd].y
                     << endl;
                return 0;
            }
        }

    return 0;
}