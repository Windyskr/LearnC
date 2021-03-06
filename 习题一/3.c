/*
编程序，计算下述各表达式，并将表达式的值以及执行表达式后被改变的那些相关变量的值一并输出。
注意，计算每一表达式前，总假定各相关变量的初值为：
int i=8, j=3; double x=1.42, y=5.2;

20/3.0 + --i （及改变后的变量i）
i /= j+2 （及变量i）
i/3+ j%3 + '0'
y += x++ - 3 （及变量x、y）
y = 13/2*(x = 2.2-3.1) （及变量x、y）
x = (i=2, j+=4, i+j/2.0) （及变量i、j、x）
*/
#include <stdio.h>
int main()
{
    int i = 8, j = 3;
    double x = 1.42, y = 5.2;
    printf("第一个表达式:20/3.0 + --i=%f,i=%d\n", 20 / 3.0 + --i, i);
    printf("第二个表达式:i /= j+2=%f,i=%d\n", i /= j + 2, i);
    printf("第三个表达式:i/3+ j%%3 + '0'=%d\n", i / 3 + j % 3 + '0');
    printf("第四个表达式:y += x++ - 3=%f,x=%f,y=%f\n", y += x++ - 3, x, y);
    printf("第五个表达式:y = 13/2*(x = 2.2-3.1)=%f,x=%f,y=%f\n", y = 13 / 2 * (x = 2.2 - 3.1), x, y);
    printf("第六个表达式:x = i=2, j+=4, i+j/2.0=%f,x=%f,y=%f\n", x = i = 2, j += 4, i + j / 2.0, x, y);
    return 0;
}