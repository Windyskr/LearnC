#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int a, b, c, d;
int main() {
    cin >> a >> b >> c >> d;
    int t1 = a * 60 + b;
    int t2 = c * 60 + d;
    if (t2 < t1) t2 += 24 * 60;
    int h = (t2 - t1) / 60, m = (t2 - t1) % 60;
    if (h == 0 && m == 0)
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    return 0;
}