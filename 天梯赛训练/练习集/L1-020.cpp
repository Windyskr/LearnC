#include <algorithm>
#include <cstring>
#include <iostream>
#include <set>
#include <vector>
using namespace std;
// 题目没看明白，所以只能得一半的分
// https://www.liuchuo.net/archives/1613
int n, k;
set<int> s, q;
vector<int> v;
bool flag;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &k);
        for (int i = 0; i < k; i++) {
            int tmp;
            scanf("%d", &tmp);
            s.insert(tmp);
        }
    }

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &k);
        if (!q.count(k) && !s.count(k)) {
            flag = true;
            v.push_back(k);
            q.insert(k);
        }
    }
    if (!flag)
        printf("No one is handsome\n");
    else {
        for (int i = 0; i < v.size(); i++) {
            printf("%d", v[i]);
            if (i != v.size() - 1) printf(" ");
        }
        puts("");
    }
    return 0;
}