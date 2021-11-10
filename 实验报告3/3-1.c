#include <stdio.h>

int main(){
    int i, j, sum;  // i存放的是数字，j是因子，sum是因子的和
    for (i = 1; i <= 1000; i++) {
        sum = 0;  // sum为0
        for (j = 1; j < i; j++) {
            if (i % j == 0)  //如果i是j的因子则i%j为0
                sum += j;    //则sum加上这个因子
        }
        if (sum == i)  //如果i这个数值的因子相加等于i则输出
            printf("%d\n", i);
    }

    return 0;
}