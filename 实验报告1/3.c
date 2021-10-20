/* 
（3）编写程序求下列表达式的值，假定a=1，b=2，c=3，d=4。
a + b++
a++ > b++ + c || 4.3 *a == b * 2 + c
a = b++
b = c++
*/
#include <stdio.h>
int main()
{
    float a = 1, b = 2, c = 3,d = 4, q1, q2, q3, q4;
    q1 = a + b++;
    a = 1, b = 2, c = 3, d = 4;
    q2 = a++ > b++ + c || 4.3 * a == b * 2 + c;
    a = 1, b = 2, c = 3, d = 4;
    q3 = a = b++;
    a = 1, b = 2, c = 3, d = 4;
    q4 = b = c++;
    printf("问题1:%f\n", q1);
    printf("问题2:%f\n", q2);
    printf("问题3:%f\n", q3);
    printf("问题4:%f\n", q4);
    return 0;
}