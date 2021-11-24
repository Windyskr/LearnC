/*（2）编无参函数，void print()，并结合使用全局变量k与n
使每调用一次该函数，总显示出k行“+”符号来，且每行均显示连续的n个“+”符号。
并编制主函数 main，对该函数进行具体调用。*/
#include <stdio.h>
int k, n;
void print() {
    int n1;
    while (k) {
        n1 = n;
        while (n1) {
            printf("+");
            n1--;
        }
        k--;
        printf("\n");
    }
}
int main() {
    k = 10, n = 10;
    print();
    return 0;
}