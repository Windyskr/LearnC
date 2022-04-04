// 注意小数点后固定保留 2 位。
// 给定一个包含千分位分隔符的数值，请读入后输出对应的不含千分位的数值，小数点仍然保留
// 2 位。
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
    string s;
    string res;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        if (s[i] != ',') res += s[i];

    cout << res << endl;
    return 0;
}