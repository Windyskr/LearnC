#include <stdio.h>
int main()
{
    int h1, h2;
    int m1, m2;
    // 初始时间9时10分，结束时间11时11分
    scanf("初始时间%d时%d分，结束时间%d时%d分", &h1, &m1, &h2, &m2);
    int t, t1, t2;
    t1 = h1 * 60 + m1;
    t2 = h2 * 60 + m2;
    t = t2 - t1;
    printf("时间差%d小时%d分\n", t / 60, t % 60);
    return 0;
}