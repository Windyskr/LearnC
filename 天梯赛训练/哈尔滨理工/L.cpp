#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int t;

int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, x, y, nc;
        int cntx = 0, cnty = 0;
        // n(x) n(y)
        cin >> n >> x >> y;
        nc = n;
        // 对 x
        do {
            if (n % x == 1) cntx++;
            n /= x;
        } while (n > 0);
        do {
            if (nc % y == 1) cnty++;
            nc /= y;
        } while (nc > 0);
        // cout << cntx << ' ' << cnty << endl;
        if (cntx > cnty)
            cout << '>' << endl;
        else if (cntx == cnty)
            cout << '=' << endl;
        else
            cout << '<' << endl;
    }

    return 0;
}