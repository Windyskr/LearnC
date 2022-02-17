#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 101;
char init[N], final[N];
void tap(int x) { init[x] == '*' ? init[x] = 'o' : init[x] = '*'; }
int main() {
    // 两行等长的字符串
    cin >> init >> final;
    // 看看有多长
    int last = strlen(init);
    // res 是 result 的缩写
    int res = 0;
    for (int i = 0; i < last - 1; i++) {
        if (init[i] != final[i]) {
            tap(i), tap(i + 1);
            res++;
        }
    }
    cout << res << endl;

    return 0;
}