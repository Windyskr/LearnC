#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

const int N = 15;
string s1, s2;
string sf;

int main() {
    cin >> s1 >> s2;

    int s1l = s1.length();
    int s2l = s2.length();

    for (int i = 1; i <= s1l; i++)
        for (int j = 1; j <= s2l; j++) {
            string sft = s1.substr(0, i) + s2.substr(0, j);
            if (sft.compare(sf) < 0 || (i == 1 && j == 1)) sf = sft;
        }

    cout << sf << endl;
    return 0;
}