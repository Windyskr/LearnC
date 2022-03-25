#include <algorithm>
#include <cstring>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

const int N = 110;

int n, m, s;

string gd[N];
int gdcnt[N];

// 筐
stack<char> k;

vector<char> v;

int main() {
    // 轨道的条数、每条轨道初始放置的物品数量、以及筐的最大容量。
    cin >> n >> m >> s;
    // 随后 N 行，每行给出 M 个英文大写字母
    for (int i = 1; i <= n; i++) cin >> gd[i];
    // 最后一行给出一系列数字，顺序对应被按下的按钮编号，直到 −1 标志输入结束
    string op;
    getline(cin, op);
    getline(cin, op);
    for (int i = 0; op[i] != '-'; i++) {
        if (op[i] == ' ') continue;
        // 操作的轨道
        int t = op[i] - '0';
        if (t != 0 && k.size() < s) {
            // 防止越界
            if (gd[t][gdcnt[t]] == 0) continue;
            k.push(gd[t][gdcnt[t]++]);
        } else if (t != 0 && k.size() == s) {
            // 当筐已经满了，启动0号键，
            // 防止越界
            if (gd[t][gdcnt[t]] == 0) continue;
            // 先移走，再压入
            v.push_back(k.top());
            k.pop();
            k.push(gd[t][gdcnt[t]++]);
        } else {
            // 防止越界
            if (k.size() == 0) continue;
            v.push_back(k.top());
            k.pop();
        }
    }

    for (auto node : v) cout << node;

    return 0;
}