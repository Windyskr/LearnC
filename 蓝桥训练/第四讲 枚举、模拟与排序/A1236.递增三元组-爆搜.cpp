#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

const int N = 1e5 + 10;
int a[N], b[N], c[N];
int n, res;

int main() {
    scanf("%d", &n);
    int t = 3;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &c[i]);
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                if (a[i] < b[j] && b[j] < c[k]) res++;

    printf("%d", res);
    return 0;
}