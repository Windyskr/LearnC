#include <iostream>
using namespace std;
int main() {
    int n, count = 0;
    // cin
    // 是输入语句，不用管类型，但是输⼊入输出的效率不不如scanf和printf快。
    cin >> n;
    while (n != 1) {
        if (n % 2 != 0) n = 3 * n + 1;
        n = n / 2;
        count++;
    }
    // count 是输出语句
    cout << count;
    return 0;
}