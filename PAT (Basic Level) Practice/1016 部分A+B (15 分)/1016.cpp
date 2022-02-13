#include <cmath>
#include <iostream>
#include <string>
using namespace std;
int main() {
    string a, da, b, db;
    cin >> a >> da >> b >> db;
    int sa = 0, sb = 0;
    while (a.find(da) != -1) {
        a = a.substr(a.find(da) + 1);
        sa++;
    }
    while (b.find(db) != -1) {
        b = b.substr(b.find(db) + 1);
        sb++;
    }
    // cout << sa << sb << endl;
    int aa = stoi(da) * (pow(10, sa) - 1) / 9;
    int ab = stoi(db) * (pow(10, sb) - 1) / 9;
    cout << aa + ab << endl;
    return 0;
}