#include <algorithm>
#include <cstring>
#include <iostream>
#include <map>
using namespace std;
map<char, string> m;
string n;
int main() {
    m['-'] = "fu";
    m['0'] = "ling";
    m['1'] = "yi";
    m['2'] = "er";
    m['3'] = "san";
    m['4'] = "si";
    m['5'] = "wu";
    m['6'] = "liu";
    m['7'] = "qi";
    m['8'] = "ba";
    m['9'] = "jiu";
    cin >> n;
    for (int i = 0; i < n.size(); i++) {
        cout << m[n[i]];
        if (i != n.size() - 1) cout << ' ';
    }
    return 0;
}