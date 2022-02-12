// 1007 素数对猜想 (20 分)
#include <iostream>
using namespace std;
// 是否是素数
bool isprime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    int n;
    // 给定任意正整数N
    cin >> n;
    // 定义上一个素数字
    int lastprime = 1;
    // 素数对个数
    int ans = 0;
    // 找出所有小于等于N的素数
    for (int i = 2; i <= n; i++) {
        if (isprime(i)) {
            if ((i - lastprime) == 2) {
                ans++;
            }
            lastprime = i;
            // cout << lastprime << endl;
        }
    }
    cout << ans << endl;
    return 0;
}