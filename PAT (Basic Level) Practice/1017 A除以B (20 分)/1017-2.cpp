#include <iostream>
using namespace std;
int main() {
    string s;
    int a, t = 0, temp = 0;
    cin >> s >> a;
    // 长度是多少
    int len = s.length();
    // 对第一个特殊考虑
    t = (s[0] - '0') / a;
    if ((t != 0 && len > 1) || len == 1) cout << t;
    temp = (s[0] - '0') % a;
    for (int i = 1; i < len; i++) {
        t = (temp * 10 + s[i] - '0') / a;
        cout << t;
        temp = (temp * 10 + s[i] - '0') % a;
    }
    cout << " " << temp;
    return 0;
}