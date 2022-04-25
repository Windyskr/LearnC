#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

const int N = 17113, E = 10931;
typedef long long LL;

int P, Q, D;
vector<int> p;

bool is_prime(int x)  // 判定质数
{
    if (x < 2) return false;
    for (int i = 2; i <= x / i; i++)
        if (x % i == 0) return false;
    return true;
}

void init() {
    for (int i = 2; i < N; i++) {
        if (is_prime(i)) {
            p.push_back(i);  //枚举所有小于N的质数，并且放进p里。
        }
    }

    for (int i = 0; i < p.size(); i++) {
        for (int j = i + 1; j < p.size(); j++) {
            if (p[i] * p[j] == N) {
                P = p[i], Q = p[j];  //得到P，Q的值
                break;
            }
        }
    }

    int x = (P - 1) * (Q - 1);
    for (int d = 1;; d++) {
        if (E * d % x == 1) {  //枚举得到私钥D的值
            D = d;
            cout << D << endl;
            break;
        }
    }
}

int quick_power(int a, int k, int p)  // 求a^k mod p 快速幂
{
    int res = 1 % p;
    while (k) {
        if (k & 1) res = (LL)res * a % p;
        a = (LL)a * a % p;
        k >>= 1;
    }
    return res;
}

int main() {
    init();
    int t, x;
    cin >> t;
    while (t--) {
        cin >> x;
        cout << quick_power(x, D, N) << endl;  //得到明文。
    }

    return 0;
}