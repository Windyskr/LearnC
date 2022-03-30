#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

typedef long long LL;
LL a[5];
int main() {
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    cout << a[0] << "->" << a[1] << "->" << a[2] << endl;
    return 0;
}