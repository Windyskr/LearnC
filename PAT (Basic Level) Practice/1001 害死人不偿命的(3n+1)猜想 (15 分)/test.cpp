#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v1;
    cout << v1.size() << endl;
    v1.resize(100);
    cout << v1.size() << endl;
    v1.resize(10);
    cout << v1.size() << endl;
    v1[0] = 1;
    cout << v1[0] << endl;
    cout << v1[1] << endl;
    // 在末尾加一个
    v1.push_back(10);
    cout << v1.size() << endl;
    // C 语言的方式访问
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
    // 使用迭代器访问
    for (auto it = v1.begin(); it != v1.end();
         it++) {  // 使⽤用迭代器器的⽅方式访问vector
        cout << *it << " ";
    }
    return 0;
}