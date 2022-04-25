#include <bits/stdc++.h>
using namespace std;
int n = 17113;  // = p * q
int e = 10931;  // e 与 (p - 1)(q - 1)互质
int p = 109, q = 157;
int d = 16139;  // 找出正整数d，使得(e*d)mod((p−1)*(q−1))=1

int main() {
    for (int i = 2; i < 1000000; i++) {
        if ((e * i) % ((p - 1) * (q - 1)) == 1) cout << i << endl;
    }
    return 0;
}