#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <map>
using namespace std;

int t;
bool st[8];

int main() {
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        // 上一个重复的位置
        int last = -10;
        int flag = true;
        memset(st, false, sizeof(st));
        for (int i = 0; i < s.size(); i++) {
            // J, L, S, Z, I, O, and T.
            if (s[i] == 'J' && !st[0])
                st[0] = true;
            else if (s[i] == 'L' && !st[1])
                st[1] = true;
            else if (s[i] == 'S' && !st[2])
                st[2] = true;
            else if (s[i] == 'Z' && !st[3])
                st[3] = true;
            else if (s[i] == 'I' && !st[4])
                st[4] = true;
            else if (s[i] == 'O' && !st[5])
                st[5] = true;
            else if (s[i] == 'T' && !st[6])
                st[6] = true;
            else {
                // 剩下的就是有重复的
                // 那就检测距离上一个重复位置的距离有没有大于7
                if (i - last < 7) {
                    // 如果有，就退出
                    flag = false;
                    break;
                }
                last = i;
            }
            // 看一下是不是 7 个都用完一遍，如果是就恢复
            bool isFull = true;
            for (int i = 0; i < 7; i++)
                if (!st[i]) isFull = false;
            if (isFull) memset(st, false, sizeof(st));
        }
        cout << flag << endl;
    }

    return 0;
}