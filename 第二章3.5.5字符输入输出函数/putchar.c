#include <stdio.h>
int main()
{
    char a = 'F',d = 'k';
    // int 会转换为 ASCII 中的字符
    int b = 117;
    int c = 99;
    // float 就不会，因为它不是整数类型,而 char 是。复习：char 的数据是以 二进制 存储的。
    // float c = '99'; 复习 float 叫单精度浮点；double 叫双精度浮点
    // 复习 int 4 字节 2^-31~(2^-31-1);unsigned int 0~2^32-1
    // short 短整型 2字节，-2^15~(2^-15-1) -32768~32767
    // unsigned short 无符号短整型 0-65535 (2^16-1)
    // long 长整型 -2^31~(2^31-1) unsigned long 0~(2^32-1)
    // 二进制第一位做了符号
    putchar(a);
    putchar(b);
    putchar(c);
    putchar(d);
    putchar('\n');
    // 还能输出换行符
    return 0;
}