#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

int init;
int all;
int pg;

int main() {
    cin >> init;
    // 第一次
    all = pg = init;
    // 第二次
    while (pg >= 3) {
        int tmp = pg / 3;
        all = all + tmp;
        pg = pg - tmp * 2;
    }
    cout << all << endl;
    return 0;
}