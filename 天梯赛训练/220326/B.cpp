#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;
long long n;

long long fastPower(long long base, long long power) {
    long long result = 1;
    while (power > 0) {
        if (power & 1) {
            result = result * base % 1000;
        }
        power >>= 1;
        base = (base * base) % 1000;
    }
    return result;
}

int main() {
    cin >> n;
    cout << fastPower(n, n) % (n + 2) << endl;
    return 0;
}