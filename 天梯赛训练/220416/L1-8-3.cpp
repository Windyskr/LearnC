#include <bits/stdc++.h>
using namespace std;
int n = 17113;  // = p * q
int d = 16139;  // 找出正整数d，使得(e*d)mod((p−1)*(q−1))=1

int main() {
    int T;
    cin >> T;
    while (T--) {
        int c;
        cin >> c;
        cout << (int)pow(c, d) % n << endl;
    }

    return 0;
}