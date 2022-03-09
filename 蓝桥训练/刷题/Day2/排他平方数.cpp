#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
typedef long long LL;

bool w[10];

bool isUnique(int x) {
    memset(w, false, sizeof w);
    while (x) {
        if (w[x % 10])
            return false;
        else {
            w[x % 10] = true;
            x /= 10;
        }
    }
    return true;
}

bool isVeryUnique(int x) {
    // 类型转换要提前
    LL square = (LL)x * x;
    while (square != 0) {
        if (w[square % 10])
            return false;
        else
            square /= 10;
    }
    return true;
}

int main() {
    for (int i = 1e5; i < 1e6; i++) {
        if (isUnique(i) && isVeryUnique(i)) cout << i << endl;
    }
    return 0;
}