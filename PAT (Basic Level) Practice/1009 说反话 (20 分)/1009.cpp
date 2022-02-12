#include <iostream>
#include <vector>
using namespace std;
int main() {
    // 读取字符串，包括空格
    string s;
    getline(cin, s);
    // cout << s;
    // 把单词提取出来，放进数组里
    int w = 0;
    vector<string> words;
    while (s.find(" ") != -1) {
        words.push_back(s.substr(0, s.find(" ")));
        w++;
        s = s.substr(s.find(" ") + 1);
        int m = s.find(" ");
    }
    cout << s;
    // 再输出
    while (w) {
        if (w) cout << " ";
        cout << words[w - 1];
        w--;
    }
    // cout << endl;
    return 0;
}