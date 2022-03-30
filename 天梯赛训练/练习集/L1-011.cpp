#include <algorithm>
#include <cstring>
#include <iostream>
#include <set>
using namespace std;

set<char> s;
string a, b;

int main() {
    getline(cin, a);
    cin >> b;
    for (int i = 0; i < b.size(); i++) s.insert(b[i]);
    for (int i = 0; i < a.size(); i++)
        if (!s.count(a[i])) cout << a[i];
    cout << endl;
    return 0;
}