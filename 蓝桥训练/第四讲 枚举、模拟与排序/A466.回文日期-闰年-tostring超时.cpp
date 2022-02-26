#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool check(int date) {
    int year = date / 10000;
    int month = date % 10000 / 100;
    int day = date % 100;

    if (!month || month >= 13 || !day) return false;

    if (month != 2 && day > months[month]) return false;

    // 背下这个闰年
    if (month == 2) {
        bool leap = year % 4 == 0 && year % 100 || year % 400 == 0;
        if (day > 28 + leap) return false;
    }

    return true;
}
bool flag;

int main() {
    int date1, date2;
    scanf("%d%d", &date1, &date2);

    int res = 0;

    for (int i = date1; i < date2; i++) {
        if (check(i)) {
            string s = to_string(i);
            flag = true;
            for (int j = 0; j < 4; j++) {
                if (s[j] != s[7 - j]) {
                    flag = false;
                    break;
                }
            }
            if (flag) res++;
        }
    }

    printf("%d\n", res);
    return 0;
}