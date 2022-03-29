#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int res;
int main() {
    // 天数 至少要出去玩的天数 至少要休息的天数。
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    getline(cin, s);
    getline(cin, s);
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++) {
            int ca = 0, cb = 0;
            for (int k = i; k <= j; k++) {
                if (s[k] == '0') ca++;
                if (s[k] == '1') cb++;
            }
            if (ca >= a && cb >= b) res++;
        }

    cout << res << endl;

    return 0;
}