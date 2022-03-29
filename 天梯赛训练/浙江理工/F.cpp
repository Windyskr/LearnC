/***
 * @Author: _krill
 * @Date: 2022-03-27 13:46:35
 * @LastEditTime: 2022-03-27 14:52:44
 * @Description:
 */
#include <bits/stdc++.h>

#define IOFAST ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;
typedef long long ll;
map<char, int> lt, rt;
map<char, int> solve(string s) {
    map<char, int> mp;
    int m = 1, slen = s.size();
    for (int i = 0; i < slen; i++) {
        if (s[i] == '+') {
            m = 1;
            continue;
        }
        string num = "";
        while (isdigit(s[i])) {
            num = num + s[i];
            i++;
        }
        if (num != "") m = stoi(num);
        num = "";
        if (isalpha(s[i])) {
            char ch = s[i];
            while (isdigit(s[++i])) {
                num = num + s[i];
            }
            if (num != "")
                mp[ch] += stoi(num) * m;
            else
                mp[ch] += m;
            i--;
        }
    }
    return mp;
}

int main() {
    // IOFAST
    int t;
    cin >> t;
    string str1, str2;
    while (t--) {
        cin >> str1;
        int mid = str1.find('>');
        str2 = str1.substr(mid + 1);
        str1 = str1.substr(0, mid);
        int slen = str1.size(), rlen = str2.size();
        int m = 1;
        lt = solve(str1);
        rt = solve(str2);
        printf("%s\n", lt == rt ? "DA" : "NE");
        lt.clear();
        rt.clear();
    }
    return 0;
}