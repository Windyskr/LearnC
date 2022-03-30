#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;

int h, m;

int main() {
    scanf("%d:%d", &h, &m);
    if (h >= 0 && h <= 12) {
        printf("Only %02d:%02d.  Too early to Dang.", h, m);
    } else {
        if (m == 0) {
            for (int i = 0; i < h - 12; i++) cout << "Dang";
        } else {
            for (int i = 0; i <= h - 12; i++) cout << "Dang";
        }
        cout << endl;
    }

    return 0;
}