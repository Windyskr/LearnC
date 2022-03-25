#include <algorithm>
#include <cstring>
#include <iostream>
#include <map>
using namespace std;

string a, b;
map<char, int> cnt;
int ans;
int main() {
    cin >> a >> b;
    int lena = a.size(), lenb = b.size();
    //记录位置
    for (int i = 0; i < lena; i++) cnt[a[i]] = i;
    //不有序就ans++
    for (int i = 1; i < lenb; i++)
        if (cnt[b[i]] <= cnt[b[i - 1]]) ans++;

    cout << ans + 1 << endl;
}