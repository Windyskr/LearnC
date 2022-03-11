#include <iostream>
using namespace std;

bool check(int x) {
    while (x) {
        if ((x % 3 == 0) || (x % 5 == 0) || (x % 7 == 0)) return false;
        x /= 10;
    }
    return true;
}

int main() {
    for (int i = 2019; i;) {
        if (check(i)) {
            cout << i << endl;
            break;
        }
        i += 2019;
    }
    return 0;
}