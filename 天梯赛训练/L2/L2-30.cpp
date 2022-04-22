// L2-030 冰岛人 (25 分)
#include <bits/stdc++.h>
using namespace std;
// 性别1/0 父亲的名字
#define pis pair<int, string>
int N, M;
string fName, sName, temp;
// 他自己的姓名
map<string, pis> Record;
// 判断五代内的关系
string check(string a, string b) {
    int cnt1 = 0, cnt2;
    while (a != "") {
        cnt2 = 0;
        string b2 = b;
        while (b2 != "") {
            // 如果找到了
            if (a == b2 && (cnt1 < 4 || cnt2 < 4)) return "No\n";
            // 如果已经超过五个了
            if (cnt1 >= 4 && cnt2 >= 4) return "Yes\n";
            b2 = Record[b2].second;
            cnt2++;
        }
        a = Record[a].second;
        cnt1++;
    }
    return "Yes\n";
}
int main() {
    cin >> N;
    // 输入人名字
    while (N--) {
        cin >> fName >> sName;
        // 前面两个是维京人，要把他们父亲的名字提取出来
        if (sName.back() == 'n')  // (sso)n 男
            Record[fName] = {1, sName.substr(0, sName.length() - 4)};
        else if (sName.back() == 'r')  // (sdotti)r 女
            Record[fName] = {0, sName.substr(0, sName.length() - 7)};
        else if (sName.back() == 'm')  // male
            Record[fName].first = 1;
        else  // female
            Record[fName].first = 0;
    }
    cin >> M;
    while (M--) {
        cin >> fName >> temp >> sName >> temp;
        // 如果有人不在名单内
        if (!Record.count(fName) || !Record.count(sName)) cout << "NA\n";
        // 如果性别相同
        else if (Record[fName].first == Record[sName].first)
            cout << "Whatever\n";
        // 查走五代之内的关系
        else
            cout << check(fName, sName);
    }
    return 0;
}