#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

typedef long long LL;
const int N = 1e5 + 10;
int n, k;
int a[10];
// 余数的个数,0 表示次数，1 表示第一个数，2 表示第二个数
int yu[10][5];
LL ans;

int main() {
    scanf("%d%d", &n, &k);

    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    sort(a, a + n);

    for (int i = n - 1; i > 0; i--) {
        int y = a[i] % k;
        yu[y][0]++;
        if (yu[y][0] == 3) {
            // 说明找到了
            ans = (LL)a[i] + yu[y][1] + yu[y][2];
            break;
        } else if (yu[y][0] == 2) {
            yu[y][2] = a[i];
        } else if (yu[y][0] == 1) {
            yu[y][1] = a[i];
        }
    }

    cout << ans << endl;
    return 0;
}