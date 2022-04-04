#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 1010;
int n;
int main() {
    cin >> n;
    while (n--) {
        int id;
        char op;
        string time;
        int s[N];
        memset(s, 0, sizeof s);
        // 时间（分钟），数本数量
        int sumtime = 0, cnt = 0;
        while (cin >> id >> op >> time) {
            // 一天结束了
            if (id == 0) break;
            if (op == 'S') {
                // 计算时间
                string h = time.substr(0, 2), m = time.substr(3, 5);
                s[id] = stoi(h) * 60 + stoi(m);
            } else if (op == 'E') {
                // 判断是不是已经借过
                if (s[id] != 0) {
                    // 计算时间
                    string h = time.substr(0, 2), m = time.substr(3, 5);
                    sumtime += stoi(h) * 60 + stoi(m) - s[id];
                    s[id] = 0;
                    cnt++;
                }
            }
        }
        // 开始计算时间
        if (cnt != 0)
            printf("%d %.0f\n", cnt, 1.0 * sumtime / cnt);
        else
            cout << "0 0" << endl;
    }
    return 0;
}