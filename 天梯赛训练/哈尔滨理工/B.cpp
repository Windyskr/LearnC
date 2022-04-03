#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int t;
/*
一个箱子里有n个黑球，m个白球，小王想要连续q次从箱子里随机的取出k个球
（每次取出k个后立即放回），连续q次取球k个都为黑球的概率是多少，
结果对1e9+7取模。
*/
double qmi(double m, int k, int p) {
    double res = 1 % p, t = m;
    while (k) {
        if (k & 1) res = (int)res * t % p;
        t = t * t % p;
        k >>= 1;
    }
    return res;
}
int main() {
    printf("%f\n", qmi(4, mod - 2, mod));
    return 0;
}