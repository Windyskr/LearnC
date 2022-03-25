#include <iostream>
using namespace std;
int main() {
    // 假设开始有n个
    for (int i = 0; i < 1000000; i++) {
        int n = i;
        // 第一只
        if (n > 0 && n % 5 == 1)
            n = n - n / 5 - 1;
        else
            continue;
        // 第二只
        if (n > 0 && n % 5 == 2)
            n = n - n / 5 - 2;
        else
            continue;
        // 第三只
        if (n > 0 && n % 5 == 3)
            n = n - n / 5 - 3;
        else
            continue;
        // 第四只
        if (n > 0 && n % 5 == 4)
            n = n - n / 5 - 4;
        else
            continue;
        // 最后一只
        if (n > 0 && n % 5 == 0) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}