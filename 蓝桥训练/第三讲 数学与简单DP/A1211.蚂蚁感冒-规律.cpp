#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;
const int N = 100;
// 蚂蚁的数目
int n;
// 蚂蚁的位置，从 0 开始
int y[N + 10];
int init;

int cnt = 1;
int main() {
    cin >> n >> init;
    // 感冒蚂蚁的位置
    n--;
    while (n--) {
        int tmp;
        scanf("%d", &tmp);
        if (tmp > 0) y[tmp] = 1;
        if (tmp < 0) y[-tmp] = -1;
    }
    bool flag = false;
    if (init < 0) {
        // 左边向右的一定会被会感染
        for (int i = 0; i < -init; i++) {
            if (y[i] == 1) cnt++, flag = true;
        }
        // 右边向左的蚂蚁也会被感染
        if (flag) {
            for (int i = N; i > -init; i--) {
                if (y[i] == -1) cnt++;
            }
        }
    }
    flag = false;
    if (init > 0) {
        // 右边向左的会被感染
        for (int i = N; i > init; i--) {
            if (y[i] == -1) cnt++, flag = true;
        }
        // 左边向右的蚂蚁也会被感染
        if (flag) {
            for (int i = 0; i < init; i++) {
                if (y[i] == 1) cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}