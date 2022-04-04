#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (b == 0) cout << a << "/0=Error";
    if (b < 0) printf("%d/(%d)=%.2f", a, b, (float)a / b);
    if (b > 0) printf("%d/%d=%.2f", a, b, (float)a / b);
    cout << endl;
    return 0;
}