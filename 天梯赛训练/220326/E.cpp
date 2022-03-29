#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        string s;
        // 棋盘的行数，棋盘的列数，其他棋子的个数，起点坐标(a,b)和终点坐标(c,d)。
        int n, m, k, a, b, c, d;
        getline(cin, s);
        getline(cin, s);
        sscanf(s.c_str(), "%d %d %d %d %d %d %d %d", &m, &m, &k, &a, &b, &c,
               &d);
    }
    return 0;
}