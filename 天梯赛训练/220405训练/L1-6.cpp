#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>

using namespace std;
int n;
int res;
bool isprime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 1; i < n; i++)
        if (n % i == 0 && !isprime(i)) res += i;
    cout << res << endl;
    return 0;
}