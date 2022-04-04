#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
    int a;
    int cnt = 0;
    while (cin >> a) {
        cnt++;
        if (a == 250) break;
    }
    cout << cnt << endl;
    return 0;
}