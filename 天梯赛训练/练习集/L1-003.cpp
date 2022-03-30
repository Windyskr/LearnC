#include <algorithm>
#include <cstring>
#include <iostream>
#include <map>
#define x first
#define y second
using namespace std;

string n;
map<int, int> m;

int main() {
    cin >> n;
    for (int i = 0; i < n.size(); i++) m[n[i] - '0']++;

    for (auto node : m) cout << node.x << ':' << node.y << endl;

    return 0;
}