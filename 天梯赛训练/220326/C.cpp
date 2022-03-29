#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>
#include <map>
using namespace std;

const int N = 1e5;
map<string, int> m;

int main() {
    string ch;
    while (cin >> ch) {
        if (ch[0] >= '0' && ch[0] <= '9') break;
        int v;
        cin >> v;
        m[ch] += v;
    }
    int n = stoi(ch);
    while (n--) {
        string ans;
        cin >> ans;
        cout << m[ans] << endl;
    }
    return 0;
}
