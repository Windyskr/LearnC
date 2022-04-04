#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int n;
string c;
string s;

int main() {
    cin >> n >> c;
    getline(cin, s);
    getline(cin, s);
    if (s.size() > n) {
        // 切除
        s = s.substr(s.size() - n);
    } else {
        // 补充
        int t = n - s.size();
        for (int i = 0; i < t; i++) s = c + s;
    }
    cout << s << endl;
    return 0;
}