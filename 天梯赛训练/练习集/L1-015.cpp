#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;

int n;
char c;

int main() {
    cin >> n >> c;

    for (int i = 0; i < (n + 1) / 2; i++) {
        for (int j = 0; j < n; j++) {
            cout << c;
        }
        cout << endl;
    }
    return 0;
}