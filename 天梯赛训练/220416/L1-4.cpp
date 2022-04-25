#include <bits/stdc++.h>
using namespace std;
int n = 17113;  // = p * q
int e = 10931;  // e 与 (p - 1)(q - 1)互质
int p = 109, q = 157;
int d;  // 找出正整数d，使得(e*d)mod((p−1)*(q−1))=1
int gcd(int m, int n) { return (n == 0) ? m : gcd(n, m % n); }

int main() {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            p = i;
            q = n / i;
            int t = (p - 1) * (q - 1);
            // 判断 t 和 e 互质
            if (gcd(t, e) == 1) cout << p << ' ' << q << endl;
        }
    }

    return 0;
}