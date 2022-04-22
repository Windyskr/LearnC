// L2-022 重排链表 (25 分)
#include <bits/stdc++.h>
using namespace std;
struct node {
    int id, data, next;
};
int main() {
    ios::sync_with_stdio(false);
    int begin, n;
    cin >> begin >> n;
    node a[100010];
    for (int i = 0; i < n; i++) {
        int tbegin, tdata, tnext;
        cin >> tbegin >> tdata >> tnext;
        // 这个存法
        a[tbegin] = {tbegin, tdata, tnext};
    }
    vector<node> v;
    // 链表的遍历方法
    // 先遍历一遍链表
    while (begin != -1) {
        v.push_back(a[begin]);
        begin = a[begin].next;
    }
    // 再从前往后交替输出
    int l = 0, r = v.size() - 1;
    vector<node> ans;
    while (1) {
        ans.push_back(v[r]);
        r--;
        // 当（l-1）-（r+1） == 1时都遍历一遍了
        if ((r + 1) - (l - 1) == 1) break;
        ans.push_back(v[l]);
        l++;
        if ((r + 1) - (l - 1) == 1) break;
    }
    // 输出
    for (int i = 0; i < ans.size(); i++) {
        if (i != ans.size() - 1)
            printf("%05d %d %05d\n", ans[i].id, ans[i].data, ans[i + 1].id);
        else
            printf("%05d %d -1\n", ans[i].id, ans[i].data);
    }
    return 0;
}