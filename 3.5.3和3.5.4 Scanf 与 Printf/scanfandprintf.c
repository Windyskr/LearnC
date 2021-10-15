#include <stdio.h>
int main()
{
    float a, b, c;
    // scanf中%f对应float，%lf对应double；printf中因为float会自动提升类型到double，所以只需要%f就行了。Longdouble 才是 Lf。
    // http://bbs.bccn.net/thread-440665-1-1.html #6
    scanf("a=%f,%f,1+%f", &a, &b, &c);
    // scanf（格式控制,输出表列）
    // 注意输入格式，必须对应。
    // scanf("%f%f%f",&a，&b，&c)
    // 输入的是变量地址，而不是变量名（~~&a,&b,&c~~)
    // d,i 有符号的二进制整数
    // u 无符号的二进制整数
    // o 无符号的八进制整数
    // x X 无符号的十六进制整数
    // c 单独字符
    // s 输入字符串
    // f 实数 和 e E g G 相同
    // l 长型 %ld %lo %lx %lx
    printf("a=%f%f,%f", a, b, c);
    // printf （格式控制,输出表列）
    // 观察输出情况
    // d 有符号的二进制整数
    // c character 一个字符，如果是输入的数字在 127 内（ ASCII ），直接转换为字符，超过只要后一个字节的
    // s 一个字符串
    // f 整数全部+6小数，第7位就不准
    // %m.nf m 几列，不够就空着。n 小数位数，区别于取整。
    // 还需要注意精度问题，f6 d15。对字符串是字符个数。
    // e 指数类型
    // o 八进制
    // x 十六进制
    // u 无符号十进制
    // g 输出浮点数，自动选择 f 或者 e
    // 两个 %% 输出 % 符号
    return 0;
}