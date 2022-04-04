// 一个和尚要挑水，每次最多能挑 a 千克，水缸最多能装 t 千克，开始时水缸为空。
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
    int a, t;
    cin >> a >> t;
    int cnt = 0;
    while (t >= 0) {
        t -= a;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}