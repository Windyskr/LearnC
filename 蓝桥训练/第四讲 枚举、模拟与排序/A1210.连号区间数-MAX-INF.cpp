#include <algorithm>
#include <cstdio>
#include <iostream>
#include <set>

using namespace std;

const int N = 10010;
const int INF = 100000000;
int n;
int arr[N];
int backup[N];
int res;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &arr[i]);

    int res = 0;
    for (int i = 1; i <= n; i++)  // 枚举区间左端点
    {
        int minv = INF, maxv = -INF;
        for (int j = i; j <= n; j++)  // 枚举区间右端点
        {
            minv = min(minv, arr[j]);
            maxv = max(maxv, arr[j]);
            if (maxv - minv == j - i) res++;
        }
    }

    printf("%d", res);
    return 0;
}