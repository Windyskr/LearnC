#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;

string a, b;
int ans;
int main() {
    cin >> a >> b;
    for (int i = 0; i < 4; i++)
        if (a[i] != b[i]) ans++;
    cout << pow(2, ans) << endl;
    return 0;
}