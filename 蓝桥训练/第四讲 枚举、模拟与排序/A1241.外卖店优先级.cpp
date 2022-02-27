#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#define x first
#define y second
using namespace std;
typedef pair<int, int> PII;

const int N = 100100;
// N 家外卖店，M 个订单， T 个时间
int n, m, t;
PII order[N];
// 表示分数
int score[N];
// 表示是否在队列中
bool st[N];
// 表示上一个订单位置
int last[N];
int cnt;

int main() {
    scanf("%d %d %d", &n, &m, &t);
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &order[i].x, &order[i].y);
    }

    sort(order, order + m);

    for (int i = 0; i < m; i++) {
        // 先减去之前分数
        score[order[i].y] -= order[i].x - last[order[i].y] - 1;
        // 别减成负数的了
        if (score[order[i].y] < 0) {
            score[order[i].y] = 0;
        }
        // 判断要提前
        if (score[order[i].y] <= 3) {
            st[order[i].y] = false;
        }
        // 先加两分
        score[order[i].y] += 2;
        //如果有多，再加两分
        while (order[i] == order[i + 1]) {
            score[order[i].y] += 2;
            i++;
        }
        if (score[order[i].y] > 5) {
            st[order[i].y] = true;
        }
        if (score[order[i].y] <= 3) {
            st[order[i].y] = false;
        }
        // 把上一个订单时间记录
        last[order[i].y] = order[i].x;
    }
    // 再处理到末尾时刻时的分数问题
    for (int i = 1; i <= n; i++) {
        if (last[i] != t) score[i] -= t - last[i];
        // 判断是否退出队列
        if (score[i] <= 3) st[i] = false;
        // 如果还是，就加一
        if (st[i] == true) cnt++;
    }

    cout << cnt << endl;
    return 0;
}