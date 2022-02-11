#include <iostream>
#include <string>
using namespace std;
//读入一个自然数n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
int main() {
    // 读入一个自然数n
    string s;
    cin >> s;
    // 计算各个位数的和，加起来变成 sum
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        sum += s[i] - '0';
    }
    // cout << sum;
    // 读出每个数字
    string py[10] = {"ling", "yi",  "er", "san", "si",
                     "wu",   "liu", "qi", "ba",  "jiu"};
    string num = to_string(sum);
    for (int i = 0; i < num.size(); i++) {
        if (i) cout << " ";
        cout << py[num[i] - '0'];
    }
    return 0;
}