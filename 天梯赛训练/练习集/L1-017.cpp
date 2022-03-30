#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;

string n;
float f = 1, o = 1;
int cnt;

int main() {
    cin >> n;
    if (n[0] == '-') {
        n = n.substr(1);
        f = 1.5;
    }
    if ((n[n.size() - 1] - '0') % 2 == 0) o = 2;

    for (int i = 0; i < n.size(); i++)
        if (n[i] == '2') cnt++;

    printf("%.2f%%", 100 * (float)cnt / n.size() * f * o);

    return 0;
}