#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

//  这个函数需要背诵下来！
bool checkVaild(int date) {
    int year = date / 10000;
    int month = date % 10000 / 100;
    int day = date % 100;
    int months[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (!month || month >= 13 || !day) return false;
    if (month != 2 && day > months[month]) return false;

    if (month == 2) {
        bool leap = year % 4 == 0 && year % 100 || year % 400 == 0;
        if (day > 28 + leap) return false;
    }

    return true;
}

bool ishw(int n) {
    int lhalf = n / 10000;
    int rhalf = 0;
    for (int i = 0; i < 4; i++) {
        rhalf = 10 * rhalf + n % 10;
        n /= 10;
    }
    if (lhalf == rhalf)
        return true;
    else
        return false;
}

bool isABhw(int n) {
    int lab = n / 1000000;
    int rab = 0;
    n = n / 100;
    for (int i = 0; i < 2; i++) {
        rab = 10 * rab + n % 10;
        n /= 10;
    }
    if (lab == rab)
        return true;
    else
        return false;
}

int main() {
    int n;
    cin >> n;
    int a, b;
    int i = n + 1;
    for (; i <= 99999999; i++)
        if (checkVaild(i) && ishw(i)) {
            a = i;
            break;
        }

    for (int j = i; j <= 99999999; j++)
        if (checkVaild(j) && ishw(j) && isABhw(j)) {
            b = j;
            break;
        }

    cout << a << endl << b << endl;
}