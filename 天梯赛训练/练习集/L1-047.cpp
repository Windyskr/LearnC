#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

vector<string> v;
int main() {
    int n;
    cin >> n;
    while (n--) {
        string name;
        int a, b;
        cin >> name >> a >> b;
        if (a < 15 || a > 70)
            v.push_back(name);
        else if (b < 50 || b > 70)
            v.push_back(name);
    }

    for (auto node : v) cout << node << endl;
    return 0;
}