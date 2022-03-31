#include <algorithm>
#include <cstring>
#include <iostream>
#include <map>
using namespace std;
string s;
map<char, int> m;

int main() {
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if (c == 'g' || c == 'G')
            m['G']++;
        else if (c == 'p' || c == 'P')
            m['P']++;
        else if (c == 'l' || c == 'L')
            m['L']++;
        else if (c == 't' || c == 'T')
            m['T']++;
    }
    // 求个最大值
    int maxs = max(m['G'], max(m['P'], max(m['L'], m['T'])));
    for (int i = 0; i < maxs; i++) {
        if (m['G'] > 0) {
            cout << "G";
            m['G']--;
        }
        if (m['P'] > 0) {
            cout << "P";
            m['P']--;
        }
        if (m['L'] > 0) {
            cout << "L";
            m['L']--;
        }
        if (m['T'] > 0) {
            cout << "T";
            m['T']--;
        }
    }
    cout << endl;
    return 0;
}