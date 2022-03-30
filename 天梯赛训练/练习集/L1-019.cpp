#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;

int ca, cb;
int ba, bb;
int n;

int main() {
    cin >> ca >> cb;
    ba = ca, bb = cb;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int flag = 1;
        int a, b, c, d;
        //    甲喊 甲划 乙喊 乙划
        cin >> a >> b >> c >> d;
        // 如果谁比划出的数字正好等于两人喊出的数字之和
        if (b == a + c) flag *= -1;
        if (d == a + c) flag *= -1;
        if (flag != 1) {
            if (b == a + c) --ca;
            if (d == a + c) --cb;
            if (ca < 0) {
                cout << 'A' << endl << bb - cb << endl;
                break;
            }
            if (cb < 0) {
                cout << 'B' << endl << ba - ca << endl;
                break;
            }
        }
    }
    return 0;
}