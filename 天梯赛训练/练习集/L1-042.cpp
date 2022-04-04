#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
int main() {
    string a;
    getline(cin, a);
    cout << a[6] << a[7] << a[8] << a[9] << '-' << a[0] << a[1] << '-' << a[3]
         << a[4] << endl;
    return 0;
}