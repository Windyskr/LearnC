#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;
vector<string> v;
int n;
int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    while (n--) {
        string tw;
        cin >> tw;
        // 找超过3个字符的单词，双指针
        for (int i = 0; i < tw.size(); i++) {
            int j = i;
            while (isalpha(tw[j])) j++;
            if (j - i >= 3) {
                string t = tw.substr(i, j - i);
                t[0] = toupper(t[0]);
                v.push_back(t);
            }
            i = j;
        }
    }
    sort(v.begin(), v.end(), greater<string>());
    v.erase(unique(v.begin(), v.end()), v.end());
    if (v.size() != 0)
        for (int i = 0; i < v.size(); i++) {
            cout << v[i];
            if (i != v.size() - 1) cout << " ";
        }
    else
        cout << "no word" << endl;
    return 0;
}