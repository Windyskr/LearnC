#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> all;
vector<string> a, b;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int g;
        string name;
        cin >> g >> name;
        all.push_back(g);
        if (g)
            a.push_back(name);
        else
            b.push_back(name);
    }
    int fa = 0, fb = 0;
    int ba = a.size() - 1, bb = b.size() - 1;
    for (int i = 0; i < all.size() / 2; i++) {
        if (all[i] == 0)
            cout << b[fb++] << " " << a[ba--] << endl;
        else
            cout << a[fa++] << " " << b[bb--] << endl;
    }

    return 0;
}