#include <iostream>
#include <map>
using namespace std;
//只能有一个P一个T，中间末尾和开头可以随便插入A。但是必须满足
//开头的A的个数 * 中间的A的个数 = 结尾的A的个数
//而且P和T中间不能没有A～
int main() {
    int n;  //有 n 组
    cin >> n;
    for (int i = 0; i < n; i++) {
        int p, t;  // P的位置，T的位置
        string str;
        cin >> str;  //输入这个字符串
        map<char, int> c;
        for (int i = 0; i < str.size(); i++) {
            c[str[i]]++;  //看看有几个字母出现了
            if (str[i] == 'P') p = i;
            if (str[i] == 'T') t = i;
        }
        if ((c.size() == 3) && (c['P'] == 1) && (c['T'] == 1) &&
            (c['A'] != 0) && (t - p > 1) &&
            ((p) * (t - p - 1) == (str.size() - t - 1))) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}