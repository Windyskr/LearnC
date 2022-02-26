#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int arr[1010] = {1, 1};
int main() {
    int n;
    cin >> n;
    int a = 1, b = 1, c;
    for (int i = 1; i <= 1000; i++) {
        c = a + b;
        arr[c] = 1;
        a = b;
        b = c;
        if (c > 1000) break;
    }
    for (int i = 1; i <= n; i++) {
        if (arr[i] == 1)
            cout << "O";
        else
            cout << "o";
    }
    cout << endl;
    return 0;
}