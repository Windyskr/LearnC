#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
// https://www.liuchuo.net/archives/1943
string t;
int a, b;

int main() {
    cin >> t;
    bool flag1 = true;
    for (int i = 0; i < t.size(); i++)
        if (t[i] < '0' || t[i] > '9') flag1 = false;

    if (flag1) a = stoi(t);

    cin >> t;
    bool flag2 = true;
    for (int i = 0; i < t.size(); i++)
        if (t[i] < '0' || t[i] > '9') flag2 = false;

    if (flag2) b = stoi(t);

    if (flag1 && flag2)
        cout << a << " + " << b << " = " << a + b << endl;
    else if (flag1 && !flag2)
        cout << a << " + ? = ?" << endl;
    else if (!flag1 && flag2)
        cout << "? + " << b << " = ?" << endl;
    else if (!flag1 && !flag2)
        cout << "? + ? = ?" << endl;

    return 0;
}