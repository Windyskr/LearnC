// （4）设计递归函数double fib(int n)；
// 用于求出Fibonacci数列的第n项（的具体项值）并返回，而后编制主函数对它进行调用。
// 1,1,2,3,5,8,13,21
#include <stdio.h>
int y = 0;
double fib(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return (fib(n - 1) + fib(n - 2));
    }
}
int main() {
    int n;
    printf("请输入n:");
    scanf("%d", &n);
    printf("%.0f\n", fib(n));
    return 0;
}