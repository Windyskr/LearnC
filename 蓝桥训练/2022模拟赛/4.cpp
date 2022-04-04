//
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
int s[30][30];
int cnt = 1;
int main() {
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 1) {
            for (int j = 1; j <= 20; j++) s[i][j] = cnt++;
        } else {
            for (int j = 20; j >= 1; j--) s[i][j] = cnt++;
        }
    }
    cout << s[20][20] << endl;
    return 0;
}