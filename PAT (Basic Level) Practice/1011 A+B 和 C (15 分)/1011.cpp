#include <iostream>
using namespace std;
int main() {
    // 测试用例的个数
    int t;
    cin >> t;
    // 比较输入
    int x = 0;
    for (int i = 0; i < t; i++) {
        long long a, b, c;
        cin >> a >> b >> c;
        cout << "Case #";
        if (a + b > c) {
            cout << ++x << ": true";
        } else {
            cout << ++x << ": false";
        }
        cout << endl;
    }
    return 0;
}