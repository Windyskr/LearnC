#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

const int N = 1010;
int n;
string id[N];
int ks[N];

int main() {
    cin >> n;
    // 准考证号 试机座位号 考试座位号
    for (int i = 0; i < n; i++) {
        string a;
        int b, c;
        cin >> a >> b >> c;
        id[b] = a, ks[b] = c;
    }
    // 询问试机座位号码
    cin >> n;
    for (int i = 0; i < n; i++) {
        int query;
        cin >> query;
        cout << id[query] << ' ' << ks[query] << endl;
    }

    return 0;
}