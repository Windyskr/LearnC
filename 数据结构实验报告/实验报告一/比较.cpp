#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
    string d;
    cin >> d;
    int data = stoi(d);
    if (d.size() == 6) {
        int y = data / 100;
        int m = data % 100;
        printf("%d-%02d\n", y, m);
    } else {
        int y = data / 100;
        int m = data % 100;
        if (d[0] == '0')
            printf("20%02d-%02d\n", y, m);
        else
            printf("19%02d-%02d\n", y, m);
    }

    return 0;
}