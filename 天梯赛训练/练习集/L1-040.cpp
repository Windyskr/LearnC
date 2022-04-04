#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;
int n;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        char a;
        double b;
        cin >> a >> b;
        if (a == 'F')
            printf("%.2f\n", b * 1.09);
        else
            printf("%.2f\n", b / 1.09);
    }
    return 0;
}