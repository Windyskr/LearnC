#include <string.h>

#include <iostream>
using namespace std;
int main() {
    char A[1001];
    int B;
    cin >> A >> B;
    int length = strlen(A);
    char Q[length];
    int count = 0;
    int tempa = 0, R = 0, isfirst = 1;
    for (int i = 0; i < length; i++) {
        tempa = R * 10 + (A[i] - '0');
        R = tempa % B;
        Q[count++] = '0' + tempa / B;
    }
    for (int i = 0; i < count; i++) {
        if (count < 2) {
            cout << "0";  //如果没有这条， 1/7则没有商输出。此为博主出错缘由
        }
        if (isfirst && Q[i] == '0') continue;
        cout << Q[i];
        isfirst = 0;
    }
    cout << " " << R << endl;
    return 0;
}