/*
lower_bound(begin,end,num)
从数组的begin位置到end-1位置二分查找第一个大于或等于num的数字
找到返回该数字的地址，不存在则返回end。
通过返回的地址减去起始地址begin,得到找到数字在数组中的下标。

upper_bound(begin,end,num)
从数组的begin位置到end-1位置二分查找第一个大于num的数字
找到返回该数字的地址，不存在则返回end。
通过返回的地址减去起始地址begin,得到找到数字在数组中的下标。

https://blog.csdn.net/qq_40160605/article/details/80150252
*/
#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
typedef long long ll;

const int N = 1e5 + 10;
int a[N], b[N], c[N];
int n;
ll res;

int main() {
    scanf("%d", &n);

    // 输入
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &c[i]);
    }

    // 排序 3 * nlogn
    sort(a, a + n);
    sort(b, b + n);
    sort(c, c + n);

    // 计算
    for (int i = 0; i < n; i++) {
        ll x = (lower_bound(a, a + n, b[i]) - a);  //在数组a中找比b[i]小的数
        ll y = n - (upper_bound(c, c + n, b[i]) - c);  //在数组c中找比b[i]大的数
        res += x * y;
    }

    printf("%lld", res);
    return 0;
}
/*
3
4 1 5
9 5 5
7 6 4
8*/
