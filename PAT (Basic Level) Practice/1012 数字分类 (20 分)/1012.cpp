#include <iostream>
using namespace std;
int main() {
    // 每个测试用例先给出一个不超过 1000 的正整数 N
    int n;
    cin >> n;
    // 随后给出 N 个不超过 1000 的待分类的正整数
    int z, as1 = 0, f2 = 1, as2 = 0, count2 = 0, count3 = 0, count4 = 0,
           sum4 = 0, as5 = -1;
    int i = 0;
    while (cin >> z) {
        switch (z % 5) {
            case 0:
                // A1 能被 5 整除的数字中所有偶数的和
                if (z % 2 == 0) {
                    as1 = as1 + z;
                }
                break;
            case 1:
                // A2 将被 5 除后余 1 的数字按给出顺序进行交错求和，即计算n1 -
                // n2 + n3
                as2 = as2 + f2 * z;
                if (f2 == 1)
                    f2 = -1;
                else
                    f2 = 1;
                // 要注意，加起来可能为0，判断是否输出为 N 应该谨慎！
                count2 = 1;
                break;
            case 2:
                // A3 被 5 除后余 2 的数字的个数
                count3++;
                break;
            case 3:
                // A4 被 5 除后余 3的数字的平均数，精确到小数点后 1 位；
                sum4 = sum4 + z;
                count4++;
                break;
            case 4:
                // A5 被 5 除后余 4 的数字中最大数字。
                if (as5 == -1) {
                    as5 = z;
                } else {
                    if (as5 < z) {
                        as5 = z;
                    }
                }
                break;
        }
        i++;
    }
    // A1
    if (as1 == 0) {
        cout << "N";
    } else {
        cout << as1;
    }
    cout << " ";
    // A2
    if (count2 == 0) {
        cout << "N";
    } else {
        cout << as2;
    }
    cout << " ";
    // A3
    if (count3 == 0) {
        cout << "N";
    } else {
        cout << count3;
    }
    cout << " ";
    // A4
    if (count4 == 0) {
        cout << "N";
    } else {
        float as4 = (float)sum4 / count4;
        printf("%.1f", as4);
    }
    cout << " ";
    // A5
    if (as5 == -1) {
        cout << "N";
    } else {
        cout << as5;
    }
    return 0;
}