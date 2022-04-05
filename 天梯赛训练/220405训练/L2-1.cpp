#include <algorithm>
#include <cstring>
#include <iostream>
#include <stack>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
stack<ll> st;

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s;
    while (cin >> s) {
        if (s[0] != '+' && s[0] != '-' && s[0] != '*' && s[0] != '/') {
            st.push(stoll(s));
        } else {
            auto a = st.top();
            st.pop();
            auto b = st.top();
            st.pop();
            //  cout << a << " " << b << endl;
            if (s[0] == '+') {
                st.push((b % mod + a % mod) % mod);
            } else if (s[0] == '-') {
                st.push((b % mod - a % mod) % mod);
            } else if (s[0] == '*') {
                st.push(((b % mod) * (a % mod)) % mod);
            } else if (s[0] == '/') {
                st.push((b % mod) / (a % mod));
            }
        }
    }
    cout << st.top() % mod;
    return 0;
}