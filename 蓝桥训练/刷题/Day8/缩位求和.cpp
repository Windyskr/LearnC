#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
string n;
int sum;
int main() {
    cin >> n;
    while (stoi(n) > 9) {
        sum = 0;
        for (int i = 0; i < n.size(); i++) sum += (n[i] - '0');
        n = to_string(sum);
    }
    cout << sum << endl;
    return 0;
}