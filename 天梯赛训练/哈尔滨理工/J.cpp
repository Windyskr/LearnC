#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
const int N = 10010;
// 大数乘法
vector<int> mul(vector<int> &A, int b) {
    vector<int> C;

    int t = 0;
    for (int i = 0; i < A.size() || t; i++) {
        if (i < A.size()) t += A[i] * b;
        C.push_back(t % 10);
        t /= 10;
    }

    while (C.size() > 1 && C.back() == 0) C.pop_back();

    return C;
}

int qmi(int m, int k, int p) {
    int res = 1 % p, t = m;
    while (k) {
        if (k & 1) res = res * t % p;
        t = t * t % p;
        k >>= 1;
    }
    return res;
}

int main() {
    // 100000 超大 1e9
    int x, z;
    string y;
    vector<int> A;
    for (int i = y.size() - 1; i >= 0; i--) A.push_back(y[i] - '0');

    cin >> x >> y >> z;
    qmi(x, y, z);
}