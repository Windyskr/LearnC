#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    printf("%.1f\n", (1.0 * pow(b, 2) - pow(a, 2)) / (2 * 1.0 * (b - a)));
    return 0;
}