#include <iostream>
#include <map>
using namespace std;
//只能有一个P一个T，中间末尾和开头可以随便插入A。但是必须满足
//开头的A的个数 * 中间的A的个数 = 结尾的A的个数
//而且P和T中间不能没有A～
int main() {
    int n, p = 0, t = 0;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        map<char, int> m;  //键是char类型的，值是int类型的
        for (int j = 0; j < s.size(); j++) {
            m[s[j]]++;  // s[j] 是一个char，m[char]++就是它的值加一，也就是计数
            if (s[j] == 'P') p = j;  // P的位置
            if (s[j] == 'T') t = j;  // T的位置
        }
        if (m['P'] == 1 && m['A'] != 0 && m['T'] == 1 &&
            m.size() == 3 /*只有三个字母*/ && t - p != 1 /*P T之间有A*/ &&
            p * (t - p - 1) == s.length() - t - 1
            /*P 前A的数目*（P T之间A的数）== 后一段A的数目*/)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}