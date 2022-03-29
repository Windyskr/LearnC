#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

const int N = 1e5 + 10;
int a[N];
int b[N];
int n;

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }

    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        if (b[i] == a[n - 1])
            cout << b[i] + a[n - 2] << ' ';
        else
            cout << b[i] + a[n - 1] << ' ';
    }

    return 0;
}