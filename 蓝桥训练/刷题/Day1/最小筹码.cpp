#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;

typedef long long LL;

LL cnt;
LL sum;
LL res;

int main() {
    LL n;
    cin >> n;
    for (int i = 0; i < 0x3f3f3f; i++) {
        sum += pow(3, i);
        if (sum >= n) {
            res = i;
            break;
        }
    }

    cout << res + 1 << endl;
    return 0;
}