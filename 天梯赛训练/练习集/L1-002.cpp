#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

int a;
int n;
int sum;
char c;
vector<int> v;

int main() {
    cin >> n >> c;
    a = n;
    // 第一层
    a--, n--;
    v.push_back(1);
    // 枚举看看有几层
    for (int i = 2; i < 100; i++) {
        int t = 2 * (2 * i - 1);
        a -= t;
        if (a < 0) break;
        sum += t;
        v.push_back(2 * i - 1);
    }

    for (int i = v.size() - 1; i >= 0; i--) {
        for (int j = 1; j <= (v[v.size() - 1] - v[i]) / 2; j++) cout << ' ';
        for (int j = 1; j <= v[i]; j++) cout << c;
        cout << endl;
    }
    for (int i = 1; i < v.size(); i++) {
        for (int j = 1; j <= (v[v.size() - 1] - v[i]) / 2; j++) cout << ' ';
        for (int j = 1; j <= v[i]; j++) cout << c;
        cout << endl;
    }
    // 输出剩下的数字
    cout << n - sum << endl;
    return 0;
}