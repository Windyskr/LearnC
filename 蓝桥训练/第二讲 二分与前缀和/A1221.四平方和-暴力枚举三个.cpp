#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>

using namespace std;

const int N = 2500010;
int n;

int main() {
    cin >> n;
    for (int a = 0; a * a <= n; a++)
        for (int b = a; a * a + b * b <= n; b++)
            for (int c = b; a * a + b * b + c * c <= n; c++) {
                int t = n - a * a - b * b - c * c;
                // 只需要枚举三个，最后一个可以算出来
                int d = sqrt(t);
                if (d * d == t) {
                    printf("%d %d %d %d\n", a, b, c, d);
                    return 0;
                }
            }
}
