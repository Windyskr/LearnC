#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int get_seconds(int h, int m, int s) { return h * 3600 + m * 60 + s; }

int get_time() {
    string line;
    getline(cin, line);

    // .c_str()函数返回一个指向正规C字符串的指针, 内容与本string串相同.
    if (line.back() != ')') line += " (+0)";  // 最后不是）

    int h1, m1, s1, h2, m2, s2, d;
    sscanf(line.c_str(), "%d:%d:%d %d:%d:%d (+%d)", &h1, &m1, &s1, &h2, &m2,
           &s2, &d);

    return get_seconds(h2, m2, s2) - get_seconds(h1, m1, s1) + d * 24 * 3600;
}

int main() {
    int n;
    scanf("%d", &n);  // scanf 是没有读回车的
    string line;
    getline(cin, line);  // 忽略掉第一行的回车
    while (n--) {
        int time = (get_time() + get_time()) / 2;
        int hour = time / 3600, minute = time % 3600 / 60, second = time % 60;
        printf("%02d:%02d:%02d\n", hour, minute, second);
    }

    return 0;
}