#include <iostream>
using namespace std;
int n, m;
bool check(int max) {
    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < 1000; j++) {
            if (max == i * n + j * m) {
                return false;
            }
        }
    }
    return true;
}
// 43 26 就超时了
int main() {
    cin >> n >> m;
    int max;
    for (int i = 1; i <= 2000; i++) {
        if (check(i)) {
            max = i;
        }
    }
    cout << max << endl;
    return 0;
}