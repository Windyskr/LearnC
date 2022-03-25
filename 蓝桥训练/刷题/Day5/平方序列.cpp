#include <algorithm>
#include <iostream>
using namespace std;

int res = 0x3f3f3f;

int main() {
    for (int x = 2019 + 1; x < 100000; x++)
        for (int y = x + 1; y < 100000; y++) {
            if ((y * y - x * x) == (x * x - 2019 * 2019)) {
                res = min(x + y, res);
            }
        }
    cout << res << endl;
    return 0;
}