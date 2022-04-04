#include <algorithm>
#include <cstring>
#include <iostream>
#include <set>
using namespace std;
int y, n;

bool check(int y1) {
    set<char> s;
    string year = to_string(y1);
    if (year.size() == 3)
        year = "0" + year;
    else if (year.size() == 2)
        year = "00" + year;
    else if (year.size() == 1)
        year = "000" + year;
    for (int i = 0; i < 4; i++) s.insert(year[i]);
    if (s.size() == n) {
        cout << y1 - y << ' ' << year << endl;
        return true;
    }
    return false;
}

int main() {
    cin >> y >> n;
    for (int i = y; i < 9999; i++) {
        if (check(i)) break;
    }
    return 0;
}