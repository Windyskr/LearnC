#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

const int N = 100010;
int n, q;
int a[N];
/*  二分查找的一般步骤
 1.找一个区间 [L,R] ，使得答案一定在该区间中
 2.找一个判断条件，使得该判断条件具有二段性，并且答案一定是该二段性的分界点。
 3.分析终点M在该判断条件下是否成立，如果成立，考虑答案在哪个区间；
如果不成立，考虑答案在哪个区间；
4.如果更新方式写的是R=Mid，则不用做任何处理;如果更新方式写的是L=Mid，则需要在计算
Mid时加上1。
*/
int main() {
    scanf("%d%d", &n, &q);
    // 输入数组
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    // 开始询问
    for (int i = 0; i < q; i++) {
        int k;
        scanf("%d", &k);
        // 二分查找找左端
        int l = 0, r = n - 1;  // 确定区间范围
        while (l < r) {
            int mid = l + r >> 1;
            if (a[mid] >= k)
                r = mid;
            else
                l = mid + 1;
        }
        if (a[r] == k) {
            cout << r << ' ';

            // 二分查找找右端
            r = n - 1;
            while (l < r) {
                int mid = l + r + 1 >> 1;
                if (a[mid] <= k) {
                    l = mid;
                } else {
                    r = mid - 1;
                }
            }
            cout << r << endl;

        } else {
            printf("-1 -1\n");
        }
    }

    return 0;
}