#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

int n;
int arr[3010];
int res;
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }
    sort(arr + 1, arr + 1 + n);
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            if (arr[i] == arr[j]) {
                arr[j]++;
                res++;
            }

    cout << res << endl;
    return 0;
}