#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;

int n;
int cal(int a) {
    int sum = 1;
    for (int i = 1; i <= a; i++) sum *= i;
    return sum;
}

int main() {
    cin >> n;
    int res = 0;
    for (int i = 1; i <= n; i++) res += cal(i);
    cout << res << endl;
    return 0;
}