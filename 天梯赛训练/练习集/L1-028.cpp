#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int n;
typedef long long ll;

bool isprime(ll x) {
    if (x < 2) return false;
    for (ll i = 2; i * i <= x; i++)
        if (x % i == 0) return false;
    return true;
}
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        ll a;
        cin >> a;
        if (isprime(a))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}