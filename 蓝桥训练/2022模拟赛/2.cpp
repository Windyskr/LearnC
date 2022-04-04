// 564
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
int cnt;
int main() {
    for (int i = 1; i <= 2021; i++) {
        bool flag = false;
        string s = to_string(i);
        for (int i = 0; i < s.size(); i++)
            if (s[i] == '2') flag = true;
        if (flag) cnt++;
    }
    cout << cnt << endl;
}