#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
/*
18013820100
int[] arr = new int[]{8,3,2,1,0};
int[] index = new int[]{3,0,4,3,1,0,2,4,3,4,4};
*/
string n;
int main() {
    cin >> n;
    for (int i = 0; i < n.size(); i++) v.push_back(n[i] - '0');
    // 处理第一行
    // 从大到小排序
    sort(v.begin(), v.end(), greater<int>());
    // 删除重复元素
    v.erase(unique(v.begin(), v.end()), v.end());
    cout << "int[] arr = new int[]{";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i != v.size() - 1) cout << ",";
    }
    cout << "};" << endl;
    // 处理第二行
    cout << "int[] index = new int[]{";
    for (int i = 0; i < n.size(); i++) {
        cout << find(v.begin(), v.end(), n[i] - '0') - v.begin();
        if (i != n.size() - 1) cout << ",";
    }
    cout << "};" << endl;
    return 0;
}
