#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

int month[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
bool check(int y, int m, int d) {
    if (m == 0 || d == 0) return false;
    if (m > 12) return false;

    if (m != 2) {
        if (d < month[m]) return true;
        return false;
    }

    int year = y + 2000;

    if (m == 2) {
        bool leap = year % 4 == 0 && year % 100 || year % 400 == 0;
        if (d > 28 + leap) return false;
    }

    return true;
}

struct date {
    int year;
    int month;
    int day;
} d[3];
int i;

bool cmp(date a, date b) {
    if (a.year != b.year) {
        return a.year < b.year;
    } else {
        if (a.month != b.month)
            return a.month < b.month;
        else if (a.day != b.day)
            return a.day < b.day;
    }
}

int main() {
    int a, b, c;
    scanf("%2d/%2d/%2d", &a, &b, &c);
    // 年 月 日
    if (check(a, b, c)) {
        d[i].year = a + 2000;
        d[i].month = b;
        d[i++].day = c;
    }

    // 日 月 年
    if (check(c, b, a)) {
        d[i].year = c + 2000;
        d[i].month = b;
        d[i++].day = a;
    }

    // 月 日 年
    if (check(c, a, b)) {
        d[i].year = c + 2000;
        d[i].month = a;
        d[i++].day = b;
    }
    sort(d, d + i, cmp);

    for (int j = 0; j < i; j++)
        printf("%d-%02d-%02d\n", d[j].year, d[j].month, d[j].day);
    return 0;
}