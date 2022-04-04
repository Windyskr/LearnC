#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int cnt;

int main() {
    int n;
    cin >> n;
    string s;
    while (cin >> s) {
        if (s == "End") break;
        if (cnt == n) {
            // 要平局
            cout << s << endl;
            cnt = 0;
        } else {
            // 要赢
            if (s == "Bu")
                cout << "JianDao" << endl;
            else if (s == "JianDao")
                cout << "ChuiZi" << endl;
            else
                cout << "Bu" << endl;
            cnt++;
        }
    }

    return 0;
}