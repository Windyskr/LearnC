#include <cmath>
#include <iostream>
using namespace std;
string s;

int main() {
    int l, n, num;
    cin >> l >> n;
    num = pow(26, l) - n;
    while (num) {
        s += 'a' + num % 26;
        num /= 26;
    }
    // 前面补 a
    for (int i = 0; i < l - s.size(); i++) cout << 'a';
    for (int i = s.size() - 1; i >= 0; i--) cout << s[i];
    cout << endl;
    return 0;
}