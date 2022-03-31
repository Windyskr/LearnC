#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int n;
int js, os;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if (t % 2 == 0)
            os++;
        else
            js++;
    }
    cout << js << ' ' << os << endl;
    return 0;
}