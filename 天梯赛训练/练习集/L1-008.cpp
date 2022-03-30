#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
int a, b;
int sum;

int main() {
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        printf("%5d", i);
        sum += i;
        if ((i - a + 1) % 5 == 0) printf("\n");
    }
    if ((b - a + 1) % 5 != 0) printf("\n");
    printf("Sum = %d\n", sum);
    return 0;
}