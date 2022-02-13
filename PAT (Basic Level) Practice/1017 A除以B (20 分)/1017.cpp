#include <iostream>
#include <string>
using namespace std;
int main() {
    string a, q;
    int b, r;
    cin >> a >> b;
    int tmp = 0;
    int i = 0;
    for (; i < a.size(); i++) {
        if ((tmp * 10 + (a[i] - '0')) % b == 0) {
            q.append(to_string((tmp * 10 + (a[i] - '0')) / b));
            tmp = 0;
        } else {
            if (i != 0) q.append(to_string((tmp * 10 + (a[i] - '0')) / b));
            tmp = (tmp * 10 + (a[i] - '0')) % b;
        }
    }
    r = tmp;
    // 测试点 2
    if (i == 1 && tmp != 0) {
        q = "0";
    }
    // 测试点 3 4 不通过
    cout << q << " " << r << endl;
    return 0;
}