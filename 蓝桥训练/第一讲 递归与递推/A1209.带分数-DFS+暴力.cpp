#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
long n;           // 这是目标
int cnt;          // 计数器
bool number[10];  // 1-9 代表九位数字,flase 表示没用过，true 表示用过了
int state[10];      // 表示10位数字
long a, b, c, tmp;  // n=100 * c == a * c + b
void dfs(int u) {
    // 如果大于9，就代表穷举数字结束了，9 个位置都有数字了
    if (u > 9) {
        /* dfs 测试语句
        for (int i = 1; i <= 9; i++) printf("%d", state[i]);
        puts("");
        */
        //那现在就是把这数字分割开来，分成 a, b,c 三部分
        // 先砍一刀在ab之间，目的是把 a 分出来
        for (int ab = 1; ab <= 9; ab++) {
            //再砍一刀，把 b 分出来
            for (int bc = ab + 1; bc <= 9; bc++) {
                int a = 0, b = 0, c = 0;
                tmp = ab;
                for (tmp; tmp != 0; tmp--) {
                    a = a * 10 + state[tmp];
                    if (a >= n) break;  // 剪枝
                }
                // cout << "a=" << a << endl;
                tmp = bc;
                for (tmp; tmp != ab; tmp--) {
                    b = b * 10 + state[tmp];
                }
                // cout << "b=" << b << endl;
                tmp = 9;
                for (tmp; tmp != bc; tmp--) {
                    c = c * 10 + state[tmp];
                }
                // cout << "c=" << c << endl;

                // cout << a << " " << b << " " << c << endl;
                //    都选择完了，那就看看是不是符合条件喽
                if (n * c == a * c + b) {
                    cnt++;
                    return;
                }
            }
        }
    }
    // 否则没结束，还有位数是空的
    // 先把 u 这一位的数字给确定了
    for (int i = 1; i <= 9; i++) {
        if (!number[i]) {
            // 如果没用过，就往下递推
            number[i] = true;
            state[u] = i;
            dfs(u + 1);
            number[i] = false;
        }
    }
}
int main() {
    scanf("%ld", &n);
    //这个意思表示第一位，123456789，总共九位
    dfs(1);
    printf("%d", cnt);
    return 0;
}