#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>

#define x first
#define y second

using namespace std;
const int N = 1e6 + 10;
typedef pair<int, int> PII;
int n, d, k;

// 记录 ts id
PII logs[N];
// 算出1 + t 内时间的ts dt
int lid[N];
// 表示点赞数
int cnt[N];
// 曾经是热贴
bool st[N];

int main() {
    scanf("%d%d%d", &n, &d, &k);

    for (int i = 0; i < n; i++) scanf("%d%d", &logs[i].x, &logs[i].y);
    // pair 函数重载了 < 运算符，先比较 first 再比较 second
    sort(logs, logs + n);

    int l, r;
    // i = 第一个指针，j = 第二个指针
    for (int i = 0, j = 0; i < n; i++) {
        // 先把第一个指针所指的帖子点赞数 + 1
        int id = logs[i].y;
        cnt[id]++;

        // 对第二个指针进行操作
        // ## 第二个指针反而再后面，作用是减去过时的帖子的点赞数
        while (logs[i].x - logs[j].x >= d) {
            cnt[logs[j].y]--;
            j++;
        }

        if (cnt[id] >= k) st[id] = true;
    }

    // 输出所有热帖号码
    for (int i = 0; i < N; i++) {
        if (st[i] == true) printf("%d\n", i);
    }

    return 0;
}