#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

typedef long long LL;

int main() {
    LL n;
    cin >> n;
    if (n == 1)
        cout << 12 << endl;
    else
        cout << n * (n + 1) * (n + 1) * 3 << endl;
    return 0;
}