#include <algorithm>
#include <cstdio>
#include <iostream>
#include <set>

using namespace std;

const int N = 10010;
int n;
int arr[N];
int backup[N];
int res;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++) {
            memcpy(backup, arr, sizeof(arr));
            // sort 函数左开右闭
            sort(&arr[i], &arr[j + 1]);
            if ((arr[j] - arr[i]) == (j - i)) {
                // cout << arr[i] << " " << arr[j] << endl;
                res++;
            }
            memcpy(arr, backup, sizeof(arr));
        }

    printf("%d\n", res);
    return 0;
}