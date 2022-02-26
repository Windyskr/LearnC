#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

int n;
int res;
int a[5] = {2, 0, 1, 9};
int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int tmp = i;
        while (tmp != 0) {
            int t = tmp % 10;
            bool flag = false;
            for (int j = 0; j < 4; j++) {
                if (a[j] == t) {
                    res += i;
                    flag = true;
                    break;
                }
            }
            if (flag) break;
            tmp /= 10;
        }
    }

    cout << res << endl;
    return 0;
}