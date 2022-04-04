#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int n;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        float h, w;
        cin >> h >> w;
        float s = 2 * (h - 100) * 0.9;

        if (abs(s - w) < s * 0.1)
            cout << "You are wan mei!" << endl;
        else if (w <= s)
            cout << "You are tai shou le!" << endl;
        else
            cout << "You are tai pang le!" << endl;
    }

    return 0;
}