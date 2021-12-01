/* （4）任意输入10 个正整数，求其中互不相同的数的个数num，以及此num
个数中哪一个数的出现次数最多，共出现了几次。
 例如，当输入的10个数为：3、2、4、1、3、2、3、5、3、8，
 则其中互不相同的数的个数num =6,而3 出现次数最多，共出现了4 次。
*/
#include <stdio.h>
int main() {
    int arr[9];
    int i = 0;
    while (i < 9) {
        scanf("%d", &arr[i]);
        i++;
    }
    // 利用flag 判断是否是唯一一个
    int flag;
    // 互不相同的数量
    int hbxt = 0;
    // 打擂台法,求次数最多和次数
    int cxcs = 0;
    int shuzi;
    // 次数
    int cs;
    for (i = 0; i < 9; i++) {
        flag = 0;
        cs = 1;
        for (int n = 0; n < i; n++) {
            if (n != i && arr[i] == arr[n]) {
                // 如果它有相等，证明他不是一个互不相同的数字
                flag = 1;
                // 它的重复次数要加一
                cs++;
            }
        }
        // 如果flag是0，他是一个互不相同的数字
        if (flag == 0) {
            hbxt++;
        } else {
            // 否则他是重复的，那就判断它的出现次数是否大于前一项
            if (cs > cxcs) {
                cxcs = cs;
                shuzi = arr[i];
            }
        }
    }
    printf("互不相同的数的个数num=%d,而%d出现次数最多，共出现了%d次\n", hbxt,
           shuzi, cxcs);
    return 0;
}