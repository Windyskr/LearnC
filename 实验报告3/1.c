// （1）键盘输入正整数n，求出n
// 与其反序数x之和并输出。例如，输入2038，输出应为：n + x = 2038 + 8302 = 10340

// 老师版本
#include <stdio.h>
int main(){
int n,x=0,t;
scanf("%d", &n);
t = n;
while (t != 0) {
    x = x * 10 + t % 10;
    t = t / 10;
}
printf("n + x =%d\n", x + n);
}