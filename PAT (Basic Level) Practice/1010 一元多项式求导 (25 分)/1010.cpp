#include <iostream>
#include <map>
using namespace std;
int main() {
    map<int, int> n;
    int i, j;
    int w = 0;
    while (cin >> i) {
        cin >> j;
        if (j == 0) {
            if (i == 0 || w == 0) {
                if (w++) cout << " ";
                cout << 0 << " " << 0;
            }
            return 0;
        } else {
            if (w++) cout << " ";
            cout << i * j << " " << j - 1;
        }
    }
}