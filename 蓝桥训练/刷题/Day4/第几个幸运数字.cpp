#include <cmath>
#include <iostream>
using namespace std;

typedef long long LL;
const LL N = 59084709587505;
LL cnt;

int main() {
    for (int i = 0; pow(3, i) <= N; i++)
        for (int j = 0; pow(5, j) <= N; j++)
            for (int k = 0; pow(7, k) <= N; k++)
                if (pow(3, i) * pow(5, j) * pow(7, k) <= N) cnt++;
    cout << cnt - 1 << endl;
    return 0;
}