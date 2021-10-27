/* 
（4）编写程序求下列表达式的值，假定a=1，b=2，c=3，d=4。
a + b++
a++ > b++ + c || 4.3 * a == b *2 + c
a = b++
b = c++
a && b + c < 2 || d++ == 4
!a<1 && b>c-a || --b<-5+2*d
*/ 
#include<stdio.h>
int main()
{
    int a = 1, b = 2, c = 3, d = 4;
    printf("a + b++=%d\n", a + b++);
    printf("a++ > b++ + c || 4.3 * a == b *2 + c=%d\n", a++ > b++ + c || 4.3 * a == b * 2 + c);
    printf("a = b++=%d\n", a = b++ );
    printf("b = c++=%d\n", b = c++);
    printf("a && b + c < 2 || d++ == 4 = %d\n",a && b + c < 2 || d++ == 4);
    printf("!a<1 && b>c-a || --b<-5+2*d=%d\n", ! a < 1 && b > c - a || --b < -5 + 2 * d);
    return 0;
}