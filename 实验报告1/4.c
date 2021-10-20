// （4）编写程序，输入一个学生某学期5门课程的成绩（整形数），计算并输出该学生的平均成绩（保留两位小数）。
#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    float ave;
    printf ("请输入你的五门课成绩：");
    scanf ("%d,%d,%d,%d,%d", &a, &b, &c, &d, &e);
    ave = (float)(a + b +c + d + e)/5;
    printf ("你的平均成绩为%.2f\n", ave);
    return 0;
}
