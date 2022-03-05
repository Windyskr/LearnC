#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int n;
double xo, yo;
vector<double> kx;

int main() {
    cin >> n >> xo >> yo;
    while (n--) {
        double tx, ty;
        cin >> tx >> ty;
        // 算斜率，斜率相同就是有
        double k;
        if (tx - xo == 0)
            k = -0x3f3f3f;
        else
            k = (ty - yo) / (tx - xo);
        // 如果找不到
        bool flag = true;
        for (auto i = kx.begin(); i != kx.end(); i++) {
            if (abs(k - *i) < 1e-20) {
                flag = false;
            }
        }
        // 就加一
        if (flag) kx.push_back(k);
    }

    cout << kx.size() << endl;

    return 0;
}