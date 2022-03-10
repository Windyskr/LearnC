#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
const int START = 1950;
const int NOW = 2014;

int age(int n) {
    int ages = 0;
    while (n) {
        ages += n % 10;
        n /= 10;
    }
    return ages;
}

int main() {
    for (int i = START; i < NOW; i++)
        if ((NOW - i) == age(i)) cout << i << endl;
    return 0;
}