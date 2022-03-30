#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;

int k[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
char s[] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
int n;
bool flag = true;

int main() {
    cin >> n;
    while (n--) {
        string id;
        cin >> id;
        int sum = 0;
        for (int i = 0; i < 17; i++) sum += (id[i] - '0') * k[i];
        if (id[17] != s[sum % 11]) {
            cout << id << endl;
            flag = false;
        }
    }
    if (flag) cout << "All passed" << endl;
    return 0;
}