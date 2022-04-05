#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;
int months[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    int y, m, d;
    scanf("%d/%d/%d", &y, &m, &d);
    // 输出下一天
    if (d == months[m]) {
        if (m == 12) {
            y++;
            m = 1;
            d = 1;
        } else if (m == 2 && y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) {
            d++;

        } else {
            m++;
            d = 1;
        }
    } else {
        if (m == 2 && d == 29) {
            m++;
            d = 1;
        } else {
            d++;
        }
    }

    cout << y << "/" << m << "/" << d << endl;
    return 0;
}
