#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

const int N = 10010;
int n;
bool sq[N][N];
int res;

int main() {
    scanf("%d", &n);

    while (n--) {
        int x1, y1, x2, y2;
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        for (int i = x1; i < x2; i++)
            for (int j = y1; j < y2; j++)
                if (!sq[i][j]) sq[i][j] = true, res++;
    }

    printf("%d", res);
    return 0;
}