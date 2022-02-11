#include <iostream>
#include <map>
#include <stack>
#include <vector>
using namespace std;
int main() {
    //第 1 行给出一个正整数 K
    int k;
    cin >> k;
    // 第 2 行给出 K 个互不相同的待验证的正整数 n
    // (1<n≤100)的值，数字间用空格隔开。
    vector<int> c;       //存放数组
    map<int, int> wait;  //待验证 map
    for (int i = 0; i < k; i++) {
        int n;
        cin >> n;
        c.push_back(n);  //添加到存放数组
        while (n != 1) {
            if (n % 2 == 0) {
                n = n / 2;
            } else {
                n = (3 * n + 1) / 2;
            }
            wait[n]++;  //加1表示验证过了
        }
    }
    // cout << "wait 测试" << endl;
    // for (auto it = wait.begin(); it != wait.end(); it++) {
    //     cout << it->first << " " << it->second << endl;
    // }
    stack<int> s;
    for (auto it = c.begin(); it != c.end(); it++) {
        if (wait[*it] == 0) {
            s.push(*it);
        }
    }
    while (s.size() != 0) {
        cout << s.top();
        s.pop();
        if (s.size() != 0) cout << " ";
    }
    cout << endl;
    return 0;
}