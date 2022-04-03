#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 1e5 + 10;
int t;

int main() {
    scanf("%d", &t);
    while (t--) {
        char s[N];
        scanf("%s", s + 1);
        int l = strlen(s + 1);
        for (int i = 1; i <= l; i++) {
            if (s[i] == '?') {
                s[i] = 'a';
                // 如果有 a
                if ((s[i - 1] == 'a' && s[i + 1] != 'a') ||
                    (s[i - 1] != 'a' && s[i + 1] == 'a') ||
                    (s[i - 1] == 'a' && s[i + 1] == 'a'))
                    s[i] = 'b';
                // 如果 a b || b a
                if ((s[i - 1] == 'a' && s[i + 1] == 'b') ||
                    (s[i - 1] == 'b' && s[i + 1] == 'a'))
                    s[i] = 'c';
            }
        }
        printf("%s\n", s + 1);
    }
    return 0;
}