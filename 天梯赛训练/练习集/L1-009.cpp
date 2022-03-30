#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 110;
// 题目要求长整型范围
typedef long long LL;
int n;
LL a[N], b[N];
LL sum;

LL gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

LL lcm(int a, int b) { return a * b / gcd(a, b); }

int main() {
    scanf("%d", &n);
    int m = 1;
    for (int i = 0; i < n; i++) {
        scanf("%lld/%lld", &a[i], &b[i]);
        m = lcm(m, b[i]);
    }
    for (int i = 0; i < n; i++) {
        a[i] *= (m / b[i]);
        sum += a[i];
    }
    // 处理数字
    LL t = gcd(sum, m);
    sum /= t;
    m /= t;
    // 特判负号
    if (sum < 0) {
        cout << '-';
        sum = abs(sum);
    }
    if (sum % m == 0)  // 是不是整数
        cout << sum / m << endl;
    else if (sum < m)  // 有没有整数
        cout << sum % m << '/' << m << endl;
    else
        cout << sum / m << ' ' << sum % m << '/' << m << endl;
    return 0;
}