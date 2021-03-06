/*（5）打印魔方阵。魔方阵是它的 每一行、每一列和对角线之和均相等 。
输入n，要求打印由1～n2的自然数构成的魔方阵（n为奇数）。如n=3时，魔方阵为
8 1 6
3 5 7
4 9 2

魔方阵中各数的排列规律：
①将“1”放在第一行（横着 的中间一列；
②从“2”开始直到n×n为止的各数依次按下列规则存放：
每一个数存放的行是前一个数的行数减1、列数加1；
③若上一个数的行数为1，则下一个数的行数为n（最下一行）；
④当上一个数的列数为n，则下一个数的列数为1；
⑤如果按上面规则确定的位置上已有数，或上一个数是第1行第n列时，则把下一个数放在上一个数的下面，
如4放在3下面，7放在6下面。
请输入n（0<n<=15，n是奇数）：5
矩阵阶数是：5
17 24 1 8 15
23 5 7 14 16
4 6 13 20 22
10 12 19 21 3
11 18 25 2 9
*/
#include <stdio.h>
#include <string.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n % 2 == 1) {
        int arr[10][10];
        int sz = 2;
        // 全部填上0,方便判断是否有数字
        memset(arr, 0, sizeof(arr));
        int i = 0, j = (n - 1) / 2;
        // ①将“1”放在第一行的中间一列；
        arr[i][j] = 1;
        // printf("arr[%d][%d] = 1\n", i, j);
        while (sz <= n * n) {
            // 横着行 i， 竖这列 j
            // ②从“2”开始直到n×n为止的各数依次按下列规则存放：
            //  每一个数存放的行是前一个数的行数i - 1减1、列数j + 1加1；
            // ③若上一个数的行数为1，则下一个数的行数为n（最下一行）；
            // ④当上一个数的列数为n，则下一个数的列数为1；
            // ⑤如果按上面规则确定的位置上已有数，或上一个数是第1行第n列时，则把下一个数放在上一个数的下面，
            if ((i == 0 && j == n - 1)) {  // (1,n) 放下面
                // printf("1\n");
                i = i + 1;
                j = j;
            } else if ((j == n - 1) && (arr[i - 1][0] == 0)) {  // (x,n)
                // printf("2\n");
                i = i - 1;                                      // 行数减1
                j = 0;                                          // 列数是 1
            } else if ((i == 0) && (arr[n - 1][j + 1] == 0)) {  //(1, x)
                // printf("3\n");
                i = n - 1;  // 行 n
                j = j + 1;  //列 +1
            } else if (arr[i - 1][j + 1] == 0) {
                // printf("4\n");
                i = i - 1;
                j = j + 1;
            } else {
                // printf("5\n");
                i = i + 1;
                j = j;
            }
            arr[i][j] = sz;
            // printf("arr[%d][%d] = %d\n", i, j, sz);
            sz++;
        }
        // 输出测试下
        for (int ix = 0; ix < n; ix++) {
            for (int jx = 0; jx < n; jx++) {
                printf("%3d", arr[ix][jx]);
            }
            printf("\n");
        }
    }
    return 0;
}